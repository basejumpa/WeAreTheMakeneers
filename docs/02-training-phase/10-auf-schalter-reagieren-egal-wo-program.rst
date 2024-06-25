10. Übung: Auf Schalter reagieren, egal wo das Programm ist
###########################################################

Todo: Beschreibung

Siehe https://www.arduino.cc/en/Reference/AttachInterrupt

.. code-block:: cpp


    int ledPin = 13;
    int interruptPin = 2;
    volatile int licht = LOW;

    void setup() {
        pinMode(ledPin, OUTPUT);
        pinMode(interruptPin, INPUT_PULLUP);
        attachInterrupt(digitalPinToInterrupt(interruptPin), schalte, RISING);
    }

    void loop() {
        digitalWrite(ledPin, licht);
    }

    void schalte() {
        licht = !licht;
    }
