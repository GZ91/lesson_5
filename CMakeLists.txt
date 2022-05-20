cmake_minimum_required(VERSION 3.5)

project(01.lesson_5)

add_executable(lesson_5 
    util.h
    util.cpp
    main.cpp
    Std_statistics.h
    Std_statistics.cpp
    Perfromance_testing.h
    Perfromance_testing.cpp
    Pct_statistics.h
    Pct_statistics.cpp
    Min_statistics.h
    Min_statistics.cpp
    Mean_statistics.h
    Mean_statistics.cpp
    Max_statistics.h
    Max_statistics.cpp
)

set_target_properties(lesson_5 PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)

install(TARGETS lesson_5)