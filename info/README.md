### Info

#### Przedstawienie koncepcji realizacji danego zadania

Projekt ten skupia siê na czêœci zewnêtrznej rozwi¹zania tzn. zestawu czujników oraz jednostki przetwarzaj¹cej bezpoœrednio odczytane dane, na któr¹ wybrane 
zosta³o Raspberry Pi Zero. Raspberry Pi Zero w wersji z anten¹ Wi-Fi oraz Bluetooth pod³¹czane by³oby do lokalnej sieci. Przez ni¹ komunikowa³o by siê ono z serwerem,
który analizowa³by zebrane dane, oblicza³ trendy, wylicza³ wielkoœci wyliczalne z danych np. punkt rosy, odbiera³ alarmy oraz stanowi³ bazê danych zgromadzonych 
informacji. 

![alt txt: Ogólny schemat](https://github.com/krzysztofWal/Studies-IBMRhapsodyRemotelyControlledWeatherStationSim/blob/master/info/readme/beautiful_infographic1.png)

#### Propozycja realizacji programowej - za³o¿enia odnoœnie narzêdzi, implementacji i struktury
Struktura programu zamodelowana jest w jêzyku UML za pomoc¹ oprogramowania IBM Rhapsody. 
Na podstawie diagramów maszyn stanu poszczególnych klas reprezentuj¹cych konkretne elementy stacji wygenerowano kod (C++).
Rhapsody umo¿liwia zdaln¹ kompilacjê i uruchomienie na samym urz¹dzeniu docelowym poprzez po³¹czenie SSH [1]. 
Poni¿szy szkic przedstawia klasy i ich wzajemne relacje.

![alt txt: Szkic schematu klas](https://github.com/krzysztofWal/Studies-IBMRhapsodyRemotelyControlledWeatherStationSim/blob/master/info/readme/beautiful_infographic2.png)

#### Klasy i maszyny stanu
Diagram klas oraz diagramy maszyn stanu s¹ zapisane jako .png w tym katalogu

- Use case diagram - [tutaj](https://github.com/krzysztofWal/Studies-IBMRhapsodyRemotelyControlledWeatherStationSim/blob/master/info/use_case.png)
- Diagram klas - [tutaj](https://github.com/krzysztofWal/Studies-IBMRhapsodyRemotelyControlledWeatherStationSim/blob/master/info/class_diagram.png)
- Maszyny stanu:

    - klasa Controller - [tutaj](https://github.com/krzysztofWal/Studies-IBMRhapsodyRemotelyControlledWeatherStationSim/blob/master/info/states_controller.png)
    - klasa Receiver - [tutaj](https://github.com/krzysztofWal/Studies-IBMRhapsodyRemotelyControlledWeatherStationSim/blob/master/info/states_receiver.png)
    - klasa Timer - [tutaj](https://github.com/krzysztofWal/Studies-IBMRhapsodyRemotelyControlledWeatherStationSim/blob/master/info/states_timer.png)
    - klasa Sensor - [tutaj](https://github.com/krzysztofWal/Studies-IBMRhapsodyRemotelyControlledWeatherStationSim/blob/master/info/states_sensor.png)

[1]	Ibm.com:
https://www.ibm.com/support/pages/using-ibm-rhapsody-cc-raspberry-pi
