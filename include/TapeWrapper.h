/* 
 * File:   TapeWrapper.h
 * Author: barbara
 *
 * Created on August 31, 2016, 12:06 PM
 */

#ifndef TAPEWRAPPER_H
#define TAPEWRAPPER_H

/*===========================================================================*
 * INCLUDES C/C++ standard library (and other external libraries)
 *===========================================================================*/
#include <iostream>
#include "boost/variant.hpp"

/*===========================================================================*
 * INCLUDES project headers
 *===========================================================================*/
#include "BobDylan.h"
#include "JohnLennon.h"
#include "TheRollingStones.h"
#include "MusicTape.h"

/*
 * This file contains all wrappers for all needed functions in MusicTape objects.
 */

/*Boost variant for all artists*/
// TODO: Add new artist here
typedef boost::variant<BobDylan, TheRollingStones, JohnLennon> Tape;

/*Return artist*/
// TODO: Add new artist here
inline Tape GetTape(artist_t artist) {

    switch (artist) {
        case(BOB_DYLAN):
        {
            return BobDylan("Like a Rolling Stone");
            break;
        }
        case(THE_ROLLING_STONES):
        {
            return TheRollingStones("Satisfaction");
            break;
        }
        case(JOHN_LENNON):
        {
            return JohnLennon("Imagine");
            break;
        }
        default:
        {
            cout << "Can't find tape for this artist." << endl;
            break;
        }
    }
}

/*
 * Write song lyrics.
 */
class Play : public boost::static_visitor<void> {
public:

    Play() {
    }

    ~Play() {
    }

    template<typename T>
    void operator()(T & operand) const {
        try {
            operand.Play();
        } catch (...) {
            cout << "Play: Tape implementation does not exist or is not correct" << endl;
        }
    }
};

/*
 * Make rewind sound.
 */
class Rewind : public boost::static_visitor<void> {
private:
    std::string rewindSound_;

public:

    Rewind(std::string rewindSound) {
        rewindSound_ = rewindSound;
    }

    ~Rewind() {
    }

    template<typename T>
    void operator()(T & operand) const {
        try {
            operand.Rewind(rewindSound_);
        } catch (...) {
            cout << "Rewind: Tape implementation does not exist or is not correct" << endl;
        }
    }
};

/*
 * Return song title.
 */
class GetSongTitle : public boost::static_visitor<string> {
public:

    GetSongTitle() {
    }

    ~GetSongTitle() {
    }

    template<typename T>
    string operator()(T & operand) const {
        try {
            return operand.GetSongTitle();
        } catch (...) {
            cout << "GetSongTitle: Tape implementation does not exist or is not correct" << endl;
        }
    }
};

#endif /* TAPEWRAPPER_H */

