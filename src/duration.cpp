#include "duration.hpp"
#include <assert.h>

Duration::Duration(){
	time = 0; //sætter time til 0
	alarmSet = false; //sætter alarmSet til false
}

Duration::Duration(int t){ 
	assert(t >= 0); //tjekker om t er større eller lig med 0
	time = t; 
}

int Duration::getDuration(){
	return time; //returnerer time
}

bool Duration::Tick(){
	time++;
	return checkAndUpdateAlarm();
}

bool Duration::Tick(int dt){
	assert(dt >= 0); //tjekker om dt er større eller lig med 0
	time += dt;
	return checkAndUpdateAlarm();
}

bool Duration::checkAndUpdateAlarm(){
	if (alarmSet && time >= alarm){ //tjekker om alarmSet er true og om time er større eller lig med alarm
		alarmSet = false; //sætter alarmSet til false
		return true; //returnerer true
	} else
	return false; //returnerer false
}

void Duration::SetAlarm(int t){
	assert(t >= time); //tjekker om t er større eller lig med 0
	alarm = t; //sætter alarm til t
	alarmSet = true; //sætter alarmSet til true
}

int Duration::getAlarm(){
	return alarm; //returnerer alarm
}