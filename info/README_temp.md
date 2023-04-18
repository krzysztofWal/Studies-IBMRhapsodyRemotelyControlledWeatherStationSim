### Info

#### Przedstawienie koncepcji realizacji danego zadania

Projekt ten skupia si� na cz�ci zewn�trznej rozwi�zania tzn. zestawu czujnik�w oraz jednostki przetwarzaj�cej bezpo�rednio odczytane dane, na kt�r� wybrane 
zosta�o Raspberry Pi Zero. Raspberry Pi Zero w wersji z anten� Wi-Fi oraz Bluetooth pod��czane by�oby do lokalnej sieci. Przez ni� komunikowa�o by si� ono z serwerem,
kt�ry analizowa�by zebrane dane, oblicza� trendy, wylicza� wielko�ci wyliczalne z danych np. punkt rosy, odbiera� alarmy oraz stanowi� baz� danych zgromadzonych 
informacji. 

![alt txt: Og�lny schemat](https://github.com/krzysztofWal/Studies-IBMRhapsodyRemotelyControlledWeatherStationSim/blob/master/info/readme/beautiful_infographic1.png)

#### Propozycja realizacji programowej - za�o�enia odno�nie narz�dzi, implementacji i struktury
Struktura programu zamodelowana jest w j�zyku UML za pomoc� oprogramowania IBM Rhapsody. 
Na podstawie diagram�w maszyn stanu poszczeg�lnych klas reprezentuj�cych konkretne elementy stacji wygenerowano kod (C++).
Rhapsody umo�liwia zdaln� kompilacj� i uruchomienie na samym urz�dzeniu docelowym poprzez po��czenie SSH [1]. 
Poni�szy szkic przedstawia klasy i ich wzajemne relacje.

![alt txt: Szkic schematu klas](https://github.com/krzysztofWal/Studies-IBMRhapsodyRemotelyControlledWeatherStationSim/blob/master/info/readme/beautiful_infographic2.png)

#### Klasy i maszyny stanu
Diagram klas oraz diagramy maszyn stanu s� zapisane jako .png w tym katalogu

- Use case diagram - [tutaj](https://github.com/krzysztofWal/Studies-IBMRhapsodyRemotelyControlledWeatherStationSim/blob/master/info/use_case.png)
- Diagram klas - [tutaj](https://github.com/krzysztofWal/Studies-IBMRhapsodyRemotelyControlledWeatherStationSim/blob/master/info/class_diagram.png)
- Maszyny stanu:

    - klasa Controller - [tutaj](https://github.com/krzysztofWal/Studies-IBMRhapsodyRemotelyControlledWeatherStationSim/blob/master/info/states_controller.png)
    - klasa Receiver - [tutaj](https://github.com/krzysztofWal/Studies-IBMRhapsodyRemotelyControlledWeatherStationSim/blob/master/info/states_receiver.png)
    - klasa Timer - [tutaj](https://github.com/krzysztofWal/Studies-IBMRhapsodyRemotelyControlledWeatherStationSim/blob/master/info/states_timer.png)
    - klasa Sensor - [tutaj](https://github.com/krzysztofWal/Studies-IBMRhapsodyRemotelyControlledWeatherStationSim/blob/master/info/states_sensor.png)

[1]	Ibm.com:
https://www.ibm.com/support/pages/using-ibm-rhapsody-cc-raspberry-pi

&aogon;

