#ifndef _TV_H
#define _TV_H
class Tv
{
public:
	friend class RemoteX;
	Tv():state(Off),volume(10),maxChannel(50),channel(1){}
	enum {Off,On};
	enum {MinVal,MaxVal = 20};
	enum {TV,DVD};

	bool onoff(void) ;
	void volUp(void) {volume++;}
	void volDown(void) {volume--;}
	void chUp(void){channel++;}
	void chDown(void){channel--;}


private:
	int state;
	int volume;
	int maxChannel;
	int channel;

};
#endif