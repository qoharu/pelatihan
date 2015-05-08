void setup() {
	Serial.begin(9600);
	system("ifconfig eth0 192.168.1.1 netmask 255.255.255.0");
	system("telnetd –l /bin/sh");
}

void loop() {
	system("ifconfig eth0 > /dev/ttyGS0");
	delay(3000);
}
