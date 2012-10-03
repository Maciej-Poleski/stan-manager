#include <iostream>
#include <string>
#include <ctime>
#include <stdexcept>
#include <cassert>

#include "Global.hxx"

int main()
{
    std::cout << "Hello World\n";
    std::cout << basePath() << std::endl;
    std::cout<<Tools::timeToDDMMYYYY(Tools::timeFromDDMMYYYY("30.02.2008"))<<std::endl;
    return 0;
}

std::string basePath()
{
    return R"(/home/evil/Dokumenty/stan/)";
}

namespace Tools
{
std::chrono::time_point<std::chrono::system_clock> timeFromDDMMYYYY(const std::string& date)
{
    if(date[2] != '.' || date[5] != '.')
        throw std::runtime_error("niepoprawny format daty: " + date);
    std::size_t pos;
    auto day = std::stoul(date.substr(0, 2), &pos);
    if(pos != 2)
        throw std::runtime_error("niepoprawny format daty: " + date);
    auto month = std::stoul(date.substr(3, 2), &pos);
    if(pos != 2)
        throw std::runtime_error("niepoprawny format daty: " + date);
    auto year = std::stoul(date.substr(6, 4), &pos);
    if(pos != 4)
        throw std::runtime_error("niepoprawny format daty: " + date);
    std::tm time = {0, 0, 0, day, month - 1, year - 1900, 0, 0, -1};
    return std::chrono::system_clock::from_time_t(std::mktime(&time));
}

std::string timeToDDMMYYYY(const std::chrono::time_point<std::chrono::system_clock>& date)
{
    char output[11];
    auto time=std::chrono::system_clock::to_time_t(date);
    auto result=std::strftime(output,11,"%d.%m.%Y",std::localtime(&time));
    assert(result==10);
    return output;
}
};
