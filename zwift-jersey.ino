#define ARRAYSIZE 52
String codes[ARRAYSIZE] = {
    "Goalienware",
    "ATOC2015",
    "GOAMGENTOC",
    "GOBATTENKILL",
    "BICYCLINGMAG",
    "BIKERADAR",
    "BIKEANDBEER",
    "CANBERRACCKIT",
    "GOCIS",
    "CRCANYC",
    "GOCYCLEOPS",
    "GOELITE",
    "GOFREESPEED",
    "GoGCN",
    "GEARPATROL",
    "GEELONGCCKIT",
    "GOLDCOAST",
    "GOLONGRIDERS",
    "GOVISION",
    "GOINGAMBA",
    "Hikkit32616",
    "JENSIE",
    "LAFUGA.CC",
    "LAVA",
    "MDCCKit",
    "MTSKIT",
    "MGCCKit",
    "NCCMAKIT",
    "PCGKIT32516",
    "GOPEARSON",
    "RIDEPOWERTAP",
    "RIDEQUARQ",
    "RADAVIST",
    "RIDEAUSTRALIA",
    "ROAD.CC",
    "GOSKRYE",
    "SIGMASPORT",
    "SLOWTWITCH",
    "SOIGNEURDK",
    "STKILDA2015KIT",
    "SYDNEYCCKIT",
    "GOTACX",
    "TDP2015",
    "GOTRAINSHARP",
    "TRIATHLETEMAG",
    "TSBIKES",
    "GOUSMES",
    "VCGHKIT",
    "WAHOOFITNESS",
    "GOWBR",
    "GOWSR",
    "ZTHKIT"
    };

boolean start = true;

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
    if (start) {
        for (int i = 0; i < ARRAYSIZE; i++) {
            printCode(codes[i]);
        }
        delay(400);
        Keyboard.print("p");
        delay(200);
        Keyboard.print("All done!");
        start = false;
    }
    ledBlink(LED_BUILTIN, 300);
}

void printCode(String code) {
    delay(400);
    Keyboard.print("p");
    delay(200);
    Keyboard.print(code);
    delay(400);
    Keyboard.println();
}
void ledBlink(int led, int delayRate) {
    delay(delayRate);
    digitalWrite(led, HIGH);
    delay(delayRate);
    digitalWrite(led, LOW);
}

