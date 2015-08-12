#include "LPrototypes.h"

class LTimer
{
private:
	int start;//point at which the timer was started
	int pTicks;//ticks at the time of pausing
	bool timerPaused;//whether the timer is paused

public:
	void start_timer();//these should explain themselves
	int get_ticks();
	void pause_timer();
	void resume_timer();
	bool paused();
};



