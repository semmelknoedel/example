
/*===========================================================================*
 * INCLUDES C/C++ standard library (and other external libraries)
 *===========================================================================*/
#include <stdio.h>
#include <iostream>

/*===========================================================================*
 * INCLUDES project headers
 *===========================================================================*/
#include "TapeWrapper.h"

using namespace std;
using namespace boost;

int main( int argc, const char* argv[] )
{
	/* 
	 * There are tapes from different artists, all can do the same thing (play songs)
	 * but they do it differently (different lyrics).
	 * The idea is to make the exchange of the chosen artist as easy as possible
	 * and without a lot of changes in the existing code.
	 * The artist could also be defined through a a config-file or via argv, for example.
	 */
	
	
	//first artist
	artist_t artist = BOB_DYLAN;
	Tape tape = GetTape(artist);
	
	cout << "Now playing: " << apply_visitor(GetSongTitle(), tape) << endl;
	apply_visitor(Play(), tape);
	apply_visitor(Rewind("zissh"), tape);
	
	/*//second artist
	artist = THE_ROLLING_STONES;
	tape = GetTape(artist);
	
	cout << "Now playing second song: " << apply_visitor(GetSongTitle(), tape) << endl;
	apply_visitor(Play(), tape);
	apply_visitor(Rewind("saaap"), tape);

	//third artist
	artist = JOHN_LENNON;
	tape = GetTape(artist);
	
	cout << "Now playing last song: " << apply_visitor(GetSongTitle(), tape) << endl;
	apply_visitor(Play(), tape);
	apply_visitor(Rewind("zwish"), tape);*/
	
	return 0;
}
