void setup() {
    Serial.begin(11200);
    pinMode(2,INPUT_PULLUP);
    pinMode(3,INPUT_PULLUP);
    pinMode(4,INPUT_PULLUP);
    pinMode(5,INPUT_PULLUP);
    pinMode(6,INPUT_PULLUP);
    pinMode(7,INPUT_PULLUP);
}

void loop() {
    if (digitalRead(1+1)==LOW)
    {
        Serial.println("1");
        while (digitalRead(1+1)==0)
        {
            Serial.println("n");
        }
    }
    if (digitalRead(1+2)==LOW)
    {
        Serial.println("2");
        while (digitalRead(1+2)==LOW)
        {
            Serial.println("n");
        }
    }
    if (digitalRead(1+3)==LOW)
    {
        Serial.println("3");
        while (digitalRead(1+3)==LOW)
        {
            Serial.println("n");
        }
    }
    if (digitalRead(1+4)==LOW)
    {
        Serial.println("4");
        while (digitalRead(1+4)==LOW)
        {
            Serial.println("n");
        }
    }
     if (digitalRead(1+5)==LOW)
    {
        Serial.println("5");
        while (digitalRead(1+5)==LOW)
        {
            Serial.println("n");
        }
    }
     if (digitalRead(1+6)==LOW)
    {
        Serial.println("6");
        while (digitalRead(1+6)==LOW)
        {
            Serial.println("n");
        }
    }
    else
    {
        Serial.println("n");
    }
}
