#include <ArduinoBLE.h>
#include <ArduinoMotorCarrier.h>
int arvo;

BLEService keyboardService("181A"); // Keyboard Service UUID
BLECharacteristic keyboardChar("2A58", BLERead | BLEWrite | BLENotify, 20); // Characteristic for sending keyboard data

void setup() {
  Serial.begin(9600);
  while (!Serial);

  if (controller.begin())
  {
    Serial.print("MKR Motor Shield connected, firmware version ");
    Serial.println(controller.getFWVersion());
  }
  else
  {
    Serial.println("Couldn't connect! Is the red led blinking? You may need to update the firmware with FWUpdater sketch");
    while (1);
  }


  // Initialize BLE
  if (!BLE.begin()) {
    Serial.println("Starting BLE failed!");
    while (1);
  }


  BLE.setLocalName("kouvolapitaiskylrajayttaa");
  BLE.setAdvertisedService(keyboardService);
  keyboardService.addCharacteristic(keyboardChar);
  BLE.addService(keyboardService);
  keyboardChar.writeValue((const uint8_t*)("WASD"), 4); // Initial value

  BLE.advertise();

  Serial.println("Bluetooth device active, waiting for connections...");
}

void loop() {
  
  BLEDevice central = BLE.central();
  if (central) {
    Serial.print("Connected to central: ");
    Serial.println(central.address());

    while (central.connected()) {
      if (keyboardChar.written()) {
        const uint8_t* data = keyboardChar.value();
        String receivedString = "";
        for (int i = 0; i < keyboardChar.valueLength(); i++) {
          receivedString += (char)data[i];
        }
        Serial.println(receivedString);
        
       if(receivedString == "w"){
      M1.setDuty(100);
      M2.setDuty(100);
    }
    if(receivedString == "s"){
      M1.setDuty(-100);
      M2.setDuty(-100);
    }
     if(receivedString == "d"){
      M1.setDuty(80);
      M2.setDuty(30);
     }
     if(receivedString == "a"){
      M1.setDuty(30);
      M2.setDuty(80);
     }
    if(receivedString == "e"){
      M1.setDuty(0);
      M2.setDuty(0);
     }
      }
      delay(100);
      
      }
    }
    Serial.println("Disconnected from central");
  }
  
