cmake_minimum_required(VERSION 3.16)

project(plugin-sdk LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB HEADERS
    plugin_sa/*.h
    plugin_sa/game_sa/*.h
    plugin_sa/game_sa/*/*.h
    shared/*.h
    shared/game/*.h
    hooking/*.h
    injector/*.hpp
)

file(GLOB SOURCES
    plugin_sa/game_sa/*.cpp
    shared/*.cpp
    shared/game/*.cpp
    hooking/*.cpp
)

add_library(gtasa STATIC ${SOURCES} ${HEADERS})

IF(MINGW)
    target_compile_options(gtasa PUBLIC -fpermissive)
ENDIF(MINGW)

target_compile_definitions(gtasa PUBLIC -DGTASA -D_DX9_SDK_INSTALLED -DRW)
target_compile_features(gtasa PRIVATE cxx_std_20)
target_include_directories(gtasa PUBLIC
    shared/
    shared/game/
    plugin_sa/game_sa/
)
target_link_directories(gtasa PUBLIC
    shared/bass/
)
target_sources(gtasa PRIVATE
    plugin_sa/game_sa/
    shared/game/
)
target_link_libraries(gtasa bass d3dx9)
