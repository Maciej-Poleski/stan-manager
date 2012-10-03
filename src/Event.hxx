/* Maciej Poleski (C) 2012 */

#ifndef EVENT_HXX
#define EVENT_HXX

#include <chrono>

class Event
{
public:

private:
    std::chrono::time_point<std::chrono::system_clock> _timeOfEvent;
};

#endif // EVENT_HXX
