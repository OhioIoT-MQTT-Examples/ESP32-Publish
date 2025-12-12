#include "scheduler.h"
#include "mqtt.h"

#define CHECK_INTERVAL 3000

Scheduler::Scheduler() {}

Scheduler scheduler;

void Scheduler::begin() {
	// modify as needed (initialize sensor libraries, for instance)
}

void Scheduler::check() {
	if (millis() - _check_timer > CHECK_INTERVAL) {
		float temperature = 70.0 + (random(0, 100) / 100.0);
		mqtt.publish("temperature", temperature);
		_check_timer = millis();
	}
}

