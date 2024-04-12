# Jalkapallobotti

1. Klikkaa oikealla ylhäällä olevaa vihreää nappia "Code" ja "Asenna ZIP".

2. Pura zip-tiedosto.

3. Paikanna purkamasi kansio.

4. Avaa arduino-sovellus

5. Avaa arduino-sovelluksen kautta arduino-skripti polulta /Jalkapallobotti-main/Jalkapallobotti-main/arduinojalkapallo/**arduinojalkapallo.ino**

6. Valitse Arduino-sovelluksen arduino-laudaksi Nano 33 IoT (https://docs.arduino.cc/software/ide-v1/tutorials/getting-started/cores/arduino-samd/), jos valitset "Arduino Nano" ilman samd-coren latausta ohjelma EI TOIMI.

7. Avaa arduino-tiedostossa Työkalut -> Prosessori "ATmega328P". **ATmega328P (old bootloader) ei toimi!!!**

8. Asenna LightBlue: https://play.google.com/store/apps/details?id=com.punchthrough.lightblueexplorer&hl=en&gl=US

9. Käynnistä arduino-skripti. Sarjamonitoriin pitäisi ilmestyä asiasta ilmoittava teksti, jos bluetooth-etsiminen on käynnissä.

10. Etsi LightBluesta robotille annettu nimi. **Tämä on oletuksella "kouvolapitaiskylrajayttaa"**. Kyseinen nimi kannattaa muuttaa, jos käytät useampia robotteja kerralla!

11. Kun olet yhdistänyt robottiin LightBluella (sarjamonitoriin pitää saapua connected to Central <mac>), rullaa aivan LightBlue-sivun alaosaan ja paina alinta näppäintä.

12. Tämän jälkeen vaihda valikosta "Hex" vaihtoehdoksi "UTF-8 String"

13. Kirjoita tekstikenttään kirjaimia w, a, s, d, ja e. Näin ohjaat robottia. Kirjaimet ilmestyvät myös sarjamonitoriin, kun ohjelma on onnistuneesti vastaanottanut ne LightBluesta.

