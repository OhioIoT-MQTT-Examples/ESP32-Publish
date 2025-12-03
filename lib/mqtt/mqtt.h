#pragma once

#include <WiFiClient.h>
#include <PubSubClient.h>

#define CLIENT_ID "test_device"		// needs to be unique across brokers
#define RETRY_INTERVAL 3000

class Mqtt {
	
	public:

		Mqtt();

		void enable_logging();
		void setup(const char *, int);
		void maintain();

		void publish(const char *, const char *);
		void publish(const char *, float);
		void publish(const char *, int);
		void publish(const char *);
		
		bool is_connected = false;

	private:

		WiFiClient _wifi_client;
		PubSubClient _mqtt_client;

		void _log_state();

		void _publish(const char *, const char *);

		unsigned long _retry_timer;
		bool _is_first = true;
		bool _echo = false;

};

extern Mqtt mqtt;