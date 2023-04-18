### Info

#### Przedstawienie koncepcji realizacji danego zadania

Projekt ten skupia si&eogon; na cz&eogon;&sacute;ci zewn&eogon;trznej rozwi&aogon;zania tzn. zestawu czujnik&oacute;w oraz jednostki przetwarzaj&aogon;cej bezpo&sacute;rednio odczytane dane, na kt&oacute;r&aogon; wybrane 
zosta&lstrok;o Raspberry Pi Zero. Raspberry Pi Zero w wersji z anten&aogon; Wi-Fi oraz Bluetooth pod&lstrok;&aogon;czane by&lstrok;oby do lokalnej sieci. Przez ni&aogon; komunikowa&lstrok;o by si&eogon; ono z serwerem,
kt&oacute;ry analizowa&lstrok;by zebrane dane, oblicza&lstrok; trendy, wylicza&lstrok; wielko&sacute;ci wyliczalne z danych np. punkt rosy, odbiera&lstrok; alarmy oraz stanowi&lstrok; baz&eogon; danych zgromadzonych 
informacji. 

![alt txt: Og&oacute;lny schemat](https://github.com/krzysztofWal/Studies-IBMRhapsodyRemotelyControlledWeatherStationSim/blob/master/info/readme/beautiful_infographic1.png)

#### Propozycja realizacji programowej - za&lstrok;o&zdot;enia odno&sacute;nie narz&eogon;dzi, implementacji i struktury
Struktura programu zamodelowana jest w j&eogon;zyku UML za pomoc&aogon; oprogramowania IBM Rhapsody. 
Na podstawie diagram&oacute;w maszyn stanu poszczeg&oacute;lnych klas reprezentuj&aogon;cych konkretne elementy stacji wygenerowano kod (C++).
Rhapsody umo&zdot;liwia zdaln&aogon; kompilacj&eogon; i uruchomienie na samym urz&aogon;dzeniu docelowym poprzez po&lstrok;&aogon;czenie SSH [1]. 
Poni&zdot;szy szkic przedstawia klasy i ich wzajemne relacje.

![alt txt: Szkic schematu klas](https://github.com/krzysztofWal/Studies-IBMRhapsodyRemotelyControlledWeatherStationSim/blob/master/info/readme/beautiful_infographic2.png)

#### Klasy i maszyny stanu
Diagram klas oraz diagramy maszyn stanu s&aogon; zapisane jako .png w tym katalogu

- Use case diagram - [tutaj](https://github.com/krzysztofWal/Studies-IBMRhapsodyRemotelyControlledWeatherStationSim/blob/master/info/use_case.png)
- Diagram klas - [tutaj](https://github.com/krzysztofWal/Studies-IBMRhapsodyRemotelyControlledWeatherStationSim/blob/master/info/class_diagram.png)
- Maszyny stanu:

    - klasa Controller - [tutaj](https://github.com/krzysztofWal/Studies-IBMRhapsodyRemotelyControlledWeatherStationSim/blob/master/info/states_controller.png)
    - klasa Receiver - [tutaj](https://github.com/krzysztofWal/Studies-IBMRhapsodyRemotelyControlledWeatherStationSim/blob/master/info/states_receiver.png)
    - klasa Timer - [tutaj](https://github.com/krzysztofWal/Studies-IBMRhapsodyRemotelyControlledWeatherStationSim/blob/master/info/states_timer.png)
    - klasa Sensor - [tutaj](https://github.com/krzysztofWal/Studies-IBMRhapsodyRemotelyControlledWeatherStationSim/blob/master/info/states_sensor.png)

[1]	Ibm.com:
https://www.ibm.com/support/pages/using-ibm-rhapsody-cc-raspberry-pi

