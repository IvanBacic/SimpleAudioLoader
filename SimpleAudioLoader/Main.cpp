#include "Sound.h"
#include<iostream>
using namespace std;

int main()
{
	// not done yet !!!!!
	Sound TheEnd = Sound(L"C:\\Users\\Ivan\\Desktop\\programiranje\\SimpleAudioLoader\\TheEnd.mp3");
	int i = 0;
	char c='b';
    while (TheEnd.Play()) {
		std::cin >> c;
		std::cout << i++;
		if (c == 'a') { 
			TheEnd.StopAll();
			//break;
			time_t t1=0;
			while(t1 < 10000000)
			{
				cin >> c;
				if (c == 'p')
				{
					break;
				}
			}
		}
		
	}
	

	return 0;
}