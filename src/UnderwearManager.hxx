/* Maciej Poleski (C) 2012 */

#ifndef UNDERWEARMANAGER_HXX
#define UNDERWEARMANAGER_HXX

#include <string>
#include <functional>
#include <set>
#include "Underwear.hxx"

class UnderwearManager
{
public:
    UnderwearManager(const std::string& basePath);

private:
    std::set < Underwear, std::function<bool(const Underwear&, const Underwear&)> > _underwears = std::set < Underwear, std::function<bool(const Underwear&, const Underwear&)> > ([](const Underwear& lhs, const Underwear& rhs)
    {
        return lhs.id() < rhs.id();
    });
    std::string _basePath;
};

#endif // UNDERWEARMANAGER_HXX
