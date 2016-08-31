/* 
 * File:   JohnLennon.cpp
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
#include "JohnLennon.h"

JohnLennon::~JohnLennon()
{
}

void JohnLennon::Play()
{
	cout << "Imagine there's no countries\n"
		"It isn't hard to do\n"
		"Nothing to kill or die for\n"
		"And no religion, too\n"

		"Imagine all the people\n"
		"Living life in peace\n"
		"..." << endl << endl;
}

void JohnLennon::Rewind(string rewindSound)
{
	cout << rewindSound << endl << endl;
	sleep(1);
}

string JohnLennon::GetSongTitle(){
	return title_;
}