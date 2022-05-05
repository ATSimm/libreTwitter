cmake_minimum_required(VERSION 3.21)
project(libreTwitter)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(main.dSYM)
include_directories(main.dSYM/Contents)
include_directories(main.dSYM/Contents/Resources)
include_directories(main.dSYM/Contents/Resources/DWARF)

add_executable(libreTwitter
        main.dSYM/Contents/Resources/DWARF/main
        main.dSYM/Contents/Info.plist
        hash.h
        main.c
        names.txt
        README.md
        structures.h
        test.c
        tweetManage.h
        tweets.csv
        userManage.h
        usernames.txt)
