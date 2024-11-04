#include "SonglistManager.hpp"

void SonglistManager::writeSong(SongInfoObject* songInfo) {
    matjson::Value obj;
    obj["songID"] = songInfo->m_songID;
}