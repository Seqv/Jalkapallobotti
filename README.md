# Jalkapallobotti

1. Klikkaa oikealla ylhäällä olevaa vihreää nappia "Code" ja "Asenna ZIP".

2. Pura zip-tiedosto.

3. Paikanna purkamasi kansio.

4. Avaa arduino-sovellus

5. Avaa arduino-sovelluksen kautta arduino-skripti polulta /Jalkapallobotti-main/Jalkapallobotti-main/arduinojalkapallo/**arduinojalkapallo.ino**

6. Avaa arduino-tiedostossa Työkalut -> Kortti "Arduino Nano"

7. Avaa arduino-tiedostossa Työkalut -> Prosessori "ATmega328P". **ATmega328P (old bootloader) ei toimi!!!**

8. Avaa työkalut, etsi portti joka toimii ja valitse se. Paina mieleen tämän portin numero.

9. Avaa orava.py IDLE-tiedostomuokkaimella. Rivi 7 on seuraava: port="COMX" #This will be different for various devices and on windows it will probably be a COM port.

10. **MUUTA "COMX" TILALLE SINUN PORTIN NUMERO. ESIMERKIKSI COM7:N NUMEROLLA TOIMIVA KOODI OLISI port="COM7"**

11. avaa cmd painamalla Windows+R, kirjoita kenttään "cmd". Paina enter.

12. Asenna pip. Mene sivustolle https://bootstrap.pypa.io/get-pip.py, asenna ohjelma, paikanna ohjelma, avaa IDLE:ssä, klikkaa RUN. Olet nyt asentanut PIP:in.

13. Kirjoita seuraava komento: **py -3 -m pip install pyserial** ja odota kunnes kirjasto on asentunut. Siinä voi mennä aikaa! Älä panikoi, jos muutamaan kymmeneen sekuntiin ei tapahdu mitään.

14. Kirjoita seuraava komento: **py -3 -m pip install pynput** ja odota taas kunnes kirjasto on asentunut

15. Mene kansioon /Jalkapallobotti-main/Jalkapallobotti-main/. Paina shift + right click kansion tyhjässä osassa, ja paina "Avaa PowerShell -ikkuna tähän"

16. Kirjoita PowerShelliin py orava.py

# Huomioitavaa

**Lähetä arduinoskripti ennen python-skriptin käynnistämistä.**

**ÄLÄ ASENNA KIRJASTOA SERIAL!!!! ASENNA KIRJASTO PYSERIAL** 

**JOS ASENSIT VAHINGOSSA PAKETIN SERIAL, SEN VOI POISTAA KOMENNOLLA py -m pip uninstall serial. Pythonin kysyessä "Proceed? (Y/n), paina enter.**

**JOS orava.py:n käynnistettäyssä ilmenee "AttributeError: module 'serial' has no attribute 'Serial', suorita cmd:ssä komento py -3 -m pip install --upgrade --force-reinstall pyserial**
