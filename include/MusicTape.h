/* 
 * File:   MusicTape.h
 * Author: barbara
 *
 * Created on August 31, 2016, 11:25 AM
 */

#ifndef MUSICTAPE_H
#define MUSICTAPE_H

/*===========================================================================*
 * INCLUDES C/C++ standard library (and other external libraries)
 *===========================================================================*/
#include <string>
using namespace std;

/*===========================================================================*
 * INCLUDES project headers
 *===========================================================================*/

/*Enumeration for different available artists.*/
enum artist_t {
  BOB_DYLAN, //Like a Rolling Stone
  THE_ROLLING_STONES, //Satisfaction
  JOHN_LENNON //Imagine
};

class MusicTape {
public:
    MusicTape();
    virtual ~MusicTape();
    
    /*Abstract functions*/
    // TODO: Implement for new artist
    
    /*Play song*/
    virtual void Play() = 0;
    
    /*Rewind tape*/
    virtual void Rewind(string rewindSound) = 0;
    
    /*Return song title*/
    virtual string GetSongTitle() = 0;
};



#endif /* MUSICTAPE_H */

