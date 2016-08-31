/* 
 * File:   TheRollingStones.h
 * Author: barbara
 *
 * Created on August 31, 2016, 11:43 AM
 */

#ifndef THEROLLINGSTONES_H
#define THEROLLINGSTONES_H

/*===========================================================================*
 * INCLUDES C/C++ standard library (and other external libraries)
 *===========================================================================*/

/*===========================================================================*
 * INCLUDES project headers
 *===========================================================================*/
#include "MusicTape.h"

class TheRollingStones : public MusicTape {
public:
    TheRollingStones(string title) : title_(title) {
    }
    virtual ~TheRollingStones();
    void Play();
    void Rewind(string rewindSound);
    string GetSongTitle();

private:
    string title_;

};

#endif /* THEROLLINGSTONES_H */

