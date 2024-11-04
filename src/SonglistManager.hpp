#pragma once

#include <Geode/Geode.hpp>
#include <matjson.hpp>

using namespace geode::prelude;

class SonglistManager {
public:
    static void writeSong(SongInfoObject* songInfo);
};