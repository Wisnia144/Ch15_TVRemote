#include <iostream>
#include "ClassRemote.h"
#include "ClassTV.h"

	using namespace std;
	
	void RemoteX::OnOff(Tv & t)
	{
		std::cout << t.onoff();
	}
	void RemoteX::volUp(Tv & t)
	{
		t.volume++;
		std::cout << "volUp:" << t.volume << "\n";
	}

	void RemoteX::volDown(Tv & t)
	{
		t.volume--;	
		std::cout << "volDown:" << t.volume << "\n";
	}
	void RemoteX::chUp(Tv & t)
	{
		t.channel++;
		std::cout << "chUp:" << t.channel << "\n";	
	}

	void RemoteX::chDown(Tv & t)
	{
		t.channel--;
		std::cout << "chwn:" << t.channel << "\n";
	}
	void RemoteX::showMode(void)
	{
		cout << "modeWork:" << modeWork << endl;
	
	}

