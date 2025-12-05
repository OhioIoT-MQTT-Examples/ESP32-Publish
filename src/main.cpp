
#include "credentials.h"
#include "wifi_tools.h"
#include "mqtt.h"
#include "scheduler.h"


void setup() {
	Serial.begin(115200);
	Serial.println("\n\tawake...");
	wifi_tools.enable_logging();
	mqtt.enable_logging();
	scheduler.begin(22, 21);
	wifi_tools.begin(WIFI_SSID, WIFI_PASS);
	mqtt.setup(MQTT_HOST, MQTT_PORT);
}


void loop() {
	if (wifi_tools.is_connected) {
		mqtt.maintain();
		scheduler.check();
	} else {
		wifi_tools.reconnect();
		mqtt.is_connected = false;
	}
}

