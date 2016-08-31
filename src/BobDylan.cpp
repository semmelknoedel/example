/* 
 * File:   BobDylan.cpp
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
#include "BobDylan.h"

using namespace std;

BobDylan::~BobDylan()
{
}

void BobDylan::Play()
{
	cout << "Once upon a time you dressed so fine\n"
		"Threw the bums a dime in your prime, didn't you?\n"
		"People call, say, 'Beware doll, you're bound to fall'\n"
		"You thought they were all kiddin' you\n"

		"You used to laugh about\n"
		"Everybody that was a-hangin' out\n"
		"Now you don't talk so loud\n"
		"Now you don't seem so proud\n"
		"About having to be scrounging your next meal\n"
		"..." << endl << endl;
}

void BobDylan::Rewind(string rewindSound)
{
	cout << rewindSound << endl << endl;
	sleep(1);
}

string BobDylan::GetSongTitle(){
	return title_;
}