#ifndef GLOBAL_HXX
#define GLOBAL_HXX

#include <string>
#include <chrono>

std::string basePath();

namespace Tools
{
std::chrono::time_point<std::chrono::system_clock> timeFromDDMMYYYY(const std::string& date);
std::string timeToDDMMYYYY(const std::chrono::time_point<std::chrono::system_clock>& date);
};

#endif
