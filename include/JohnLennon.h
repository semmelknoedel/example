/* 
 * File:   JohnLennon.h
 * Author: barbara
 *
 * Created on August 31, 2016, 11:43 AM
 */

#ifndef JOHNLENNON_H
#define JOHNLENNON_H

/*===========================================================================*
 * INCLUDES C/C++ standard library (and other external libraries)
 *===========================================================================*/

/*===========================================================================*
 * INCLUDES project headers
 *===========================================================================*/
#include "MusicTape.h"

class JohnLennon : public MusicTape {
public:
    JohnLennon(string title) : title_(title) {
    }
    virtual ~JohnLennon();

    void Play();
    void Rewind(string rewindSound);
    string GetSongTitle();

private:
    string title_;
};

#endif /* JOHNLENNON_H */

