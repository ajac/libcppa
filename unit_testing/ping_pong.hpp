#ifndef PING_PONG_HPP
#define PING_PONG_HPP

//#include "cppa/actor.hpp"

#include <cstddef>
#include "cppa/cppa_fwd.hpp"

void ping(cppa::blocking_actor*, size_t num_pings);

void event_based_ping(cppa::event_based_actor*, size_t num_pings);

void pong(cppa::blocking_actor*, cppa::actor ping_actor);

void event_based_pong(cppa::event_based_actor*, cppa::actor ping_actor);

// returns the number of messages ping received
size_t pongs();

#endif // PING_PONG_HPP
