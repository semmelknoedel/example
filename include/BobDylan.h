/* 
 * File:   BobDylan.h
 * Author: barbara
 *
 * Created on August 31, 2016, 11:43 AM
 */

#ifndef BOBDYLAN_H
#define BOBDYLAN_H

/*===========================================================================*
 * INCLUDES C/C++ standard library (and other external libraries)
 *===========================================================================*/

/*===========================================================================*
 * INCLUDES project headers
 *===========================================================================*/
#include "MusicTape.h"

class BobDylan : public MusicTape {
public:

    BobDylan(string title) : title_(title) {
    }
    virtual ~BobDylan();
    void Play();
    void Rewind(string rewindSound);
    string GetSongTitle();

private:
    string title_;

};

#endif /* BOBDYLAN_H */

