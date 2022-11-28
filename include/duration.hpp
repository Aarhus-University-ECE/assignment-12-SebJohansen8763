
#ifndef _DURATION_H_
#define _DURATION_H_

class Duration {

	private:

		int time;
		int alarm;
		bool alarmSet;

	public:

		Duration(); //constructor

		int getDuration(); // returns the time

		Duration(int t); //constructor

		~Duration(); //destructor

		bool Tick();

		bool Tick(int dt); 

		void SetAlarm(int t);

		void setDuration(int t);

		int getAlarm();

		bool checkAndUpdateAlarm();

};
#endif
