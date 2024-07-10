Vorher - Software installieren
##############################


Benötigte Software
******************

Entwicklungsumgebung für Arduino
    `arduino-ide_2.3.2_Windows_64bit.msi <https://downloads.arduino.cc/arduino-ide/arduino-ide_2.3.2_Windows_64bit.msi>`__ [#]_


Treiber für CH340 Chip
    `CH341SER.ZIP <https://www.wch.cn/downloads/file/5.html?time=2023-03-17%2016:48:51&code=BBZJzJ2kw24QbUa8LUedUzVx4PRkjlwz9evWqUCb?time=2024-07-08%2012:20:04&code=lCVr67G96pyekIQg5857dhQWeOFGZT2tiBPuXn77>`__ [#]_


Entweder ladet ihr die Software aus dem Internet über die obigen Links oder von einem der USB-Sticks, die ich mitgebracht habe.


Installieren der Software
*************************

Entwicklungsumgebung für Arduino
================================

Started das Installationsprogramm `arduino-ide_2.3.2_Windows_64bit.msi` und klickt Euch durch
aufkommende Dialoge.


Treiber für CH340 Chip
======================

In dem Zip des Treibers ist eine `SETUP.EXE`. Mittels dieser sollte die Installation auf den meisten Laptops funktionieren.

Falls ihr damit die Installation so nicht funktioniert. In diesem Falle muss man (nach Entzippen der Datei) die Installation über den Gerätemanager vornehmen wie folgt:

- Arduino über Kabel an USB anschließen
- Der Computer teilt mit, dass die Installation nicht funktioniert hat
- In den Gerätemanager gehen (z.B. über Start, Rechts-click von Computer, dann Kontextmenü Eigenschaften, dort Gerätemanager)
- Im Gerätemanager sieht man unter Unbekannten Geräten ein Gerät namens USB 2.0 usw. dieses Rechts-Click, dann neuer Treiber. Dann das entzippte Verzeichnis, dort wo die Setup.exe ist, angeben. Dann klappt's mit dem Treiber.


Optionale Software
******************

Fritzing
    Die Schaltungen in dieser Doku habe ich mit dem Program "Fritzing" gemacht, das kann man von
    http://fritzing.org herunterladen.

Bounce2-Bibliothek
    Für die einfache Flanken-Erkennung bei den Schaltern habe ich in die Entwicklungsumgebung die
    Bounce2-Bibliothek gleich mit installiert. In der aktuellen Version von der Arduino-Entwicklungsumgebung sollte diese automatisch dabei sein. Falls ihr die Bibliothek (trotzdem) braucht: Diese bekommt ihr von dort
    https://github.com/thomasfredericks/Bounce2/wiki


.. rubric:: Anmerkungen

.. [#] ist von der Seite https://www.arduino.cc

.. [#] Der Link ist von der Seite
    http://www.jens-bretschneider.de/aktuelle-treiber-fur-seriell-zu-usb-adapter/ . Treiber für MacOS,
    Linux (und auch Windows) sind unter https://sparks.gogo.co.nz/ch340.html verfügbar.
