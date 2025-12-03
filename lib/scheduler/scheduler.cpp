#include "scheduler.h"
#include "mqtt.h"


Scheduler::Scheduler() {}

Scheduler scheduler;

void Scheduler::begin(int sda, int scl) {
	// add any required setup code here
}

void Scheduler::check() {
	if (millis() - _check_timer > CHECK_INTERVAL) {
		// create your own payload here, and then uncomment below to publish
		// mqtt.publish("temp", payload);
		_check_timer = millis();
	}
}

