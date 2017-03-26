#include "Sound.h"
#include<iostream>


int main()
{
	Sound TheEnd = Sound(L"C:\\Users\\Ivan\\Desktop\\programiranje\\SimpleAudioLoader\\TheEnd.mp3");

		while (true) {
			TheEnd.Play();
		}
	return 0;
}