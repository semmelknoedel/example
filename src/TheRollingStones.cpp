/* 
 * File:   TheRollingStones.cpp
 * Author: barbara
 * 
 * Created on August 31, 2016, 11:43 AM
 */

/*===========================================================================*
 * INCLUDES C/C++ standard library (and other external libraries)
 *===========================================================================*/
#include <iostream>
#include <unistd.h>

/*===========================================================================*
 * INCLUDES project headers
 *===========================================================================*/
#include "TheRollingStones.h"

TheRollingStones::~TheRollingStones()
{
}

void TheRollingStones::Play()
{
	cout << "I can't get no satisfaction\n"
		"I can't get no satisfaction\n"
		"'Cause I try and I try and I try and I try\n"
		"I can't get no, I can't get no\n"

		"When I'm drivin' in my car\n"
		"And that man comes on the radio\n"
		"He's tellin' me more and more\n"
		"About some useless information\n"
		"..." << endl << endl;
}

void TheRollingStones::Rewind(string rewindSound)
{
	cout << rewindSound << endl << endl;
	sleep(1);
}


string TheRollingStones::GetSongTitle(){
	return title_;
}
