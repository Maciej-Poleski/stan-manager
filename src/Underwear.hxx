/* Maciej Poleski (C) 2012 */

#ifndef UNDERWEAR_HXX
#define UNDERWEAR_HXX

#include <cstdint>
#include <chrono>
#include <vector>

class Event;
class Underwear
{
public:
    std::uint32_t id() const;
private:
    std::uint32_t _id;
    std::chrono::time_point<std::chrono::system_clock> _timeOfRejestration;
    std::vector<Event*> _events;
public:
};

#endif // UNDERWEAR_HXX
