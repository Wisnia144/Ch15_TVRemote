#include "MainHeader.h"
	using std::cout;
class RemoteManager
{
public:
	RemoteManager(RemoteX x)
	{
		eRemote = x;
		cout << "constr\n";
	};
	void helpDisplay(void)
	{
		cout << "Up #72 (VolUp)\n";
		cout << "Down #80 (VolDown)\n";
		cout << "Right #77 (ChUp)\n";
		cout << "Left #75 (ChDown)\n";
	};
	void switchCases(const char c)
	{
		//cout << "Received:" << static_cast<int>(c) <<std::	endl;
		switch (c){
		case 80:
				eRemote.volDown(eTv);
			break;
		case 72:
				eRemote.volUp(eTv);			
			break;
		case 77:
				eRemote.chUp(eTv);
			break;
		case 75:
				eRemote.chDown(eTv);
			break;
		case 'h':
			helpDisplay();
			break;
		};
	};
private:
	RemoteX eRemote;
	Tv eTv;
};


	
int main()
{

	std::cout << "\n============\n";

	Tv eTv;
	RemoteX eRem;
	RemoteManager rMan(eRem);
	eRem.chDown(eTv);
	eRem.volUp(eTv);
	
	char c  = 'h';
	do{
		if(c > 0)
			cout << static_cast<int>(c) <<"...(h dor help)\n";
		c = _getch();
		rMan.switchCases(c);
	}while(c !='k' && c !=27);
	
	return 0;
}