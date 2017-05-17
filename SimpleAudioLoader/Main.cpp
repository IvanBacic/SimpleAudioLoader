#include "Sound.h"
#include "conio.h"

using namespace std;

int main()
{ 
	// not done yet !!!!!
	Sound TheEnd = Sound(L"C:\\Users\\Ivan\\Desktop\\programiranje\\SimpleAudioLoader\\TheEnd.mp3");

	char c = 0;
	int i = 0,second = 0;

	while (true)
	{
		c = _getch();
	
			if ((c=='a'||'p')&&i==0)             // starts from the 	beginning
			{ 
				TheEnd.Play(); i++;
				std::cout << i<<endl;
			}
				

			else if(c=='s')                    // stops and clears all buffers
			{
				TheEnd.StopAll(); i = 0; second = 0;
				std::cout << i << endl;
				
			}
			else if(c=='p')                    // pauses or unpauses sound
			{
				second =TheEnd.pause(second);
				i++;
				std::cout << i << endl;
			}
			fflush(stdin);
		
	}
	std::cout << "heeey";

	
	return 0;
}