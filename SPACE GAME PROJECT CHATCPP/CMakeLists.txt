cmake_minimum_required(VERSION 3.27)
project(Spacegame)

set(CMAKE_CXX_STANDARD 17)

add_executable(Spacegame main.cpp
        inc/Ship/ship.h
        inc/Ship/normalship.h
        inc/Ship/fastship.h
        inc/Ship/strongship.h
        src/events/abandonedplanetevent.cpp
        inc/Events/abandonedplanetevent.h
        inc/Events/events.h
        inc/Ship/shipgenerator.h
        inc/Events/crossthebeltevent.h
        src/events/crossthebeltevent.cpp
        src/ship/shipgenerator.cpp
        src/events/spacepiratesevent.cpp
        inc/Events/spacepiratesevent.h
        "src/ship/specialities(ship).cpp"
)
