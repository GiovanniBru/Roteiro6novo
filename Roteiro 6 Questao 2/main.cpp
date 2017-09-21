#include<iostream>
#include"Televisao.h"

using namespace std;

int main()
{
    Televisao tv;
    tv.setCanal(50);
    tv.setVolume(50);
    int aux;
    int on = 1;

    while(on)
    {
		std::cout << " -- Canal " << tv.getCanal() << std::endl;
		std::cout << " -- Volume " << tv.getVolume() << std::endl;
		std::cout << "1 - Aumentar Canal \n"
					 "2 - Diminuir Canal\n"
					 "3 - Aumentar Volume \n"
					 "4 - Aumentar Volume -\n"
					 "5 - Exit\n" << std::endl;
		std::cin >> aux;
		switch(aux){
			case 1:
				tv.aumentarCanal();
				break;
			case 2:
				tv.diminuirCanal();
				break;
			case 3:
				tv.aumentarVolume();
				break;
			case 4:
				tv.diminuirVolume();
				break;
			case 5:
				on=0;
				break;
			default:
				puts("ERRO");
		}
		system("cls");
	}
	return 0;
    }
}
