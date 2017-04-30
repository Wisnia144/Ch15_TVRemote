#ifndef _RemoteX_H
#define _RemoteX_H
class RemoteX
{
public:
	friend class Tv;
	enum Modes {NORMAL,INTERACTIVE};

	RemoteX(Modes inMode = NORMAL):mode(1),modeWork(inMode) {};
	void OnOff(Tv & t);
	void volUp(Tv & t);
	void volDown(Tv & t);
	void chUp(Tv & t);
	void chDown(Tv & t);
	
	void SetMode(Modes mMode);
private:
	int mode;//tv or dvd
	Modes modeWork;

};
#endif