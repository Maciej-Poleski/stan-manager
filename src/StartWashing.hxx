/* Maciej Poleski (C) 2012 */

#ifndef STARTWASHING_HXX
#define STARTWASHING_HXX

#include <Event.hxx>

#include <cstdint>

class StartWashing : public Event
{

private:
    uint32_t _id;
};

#endif // STARTWASHING_HXX
