#define STS_ON LOW

#define STS_OFF HIGH

#define HIGH 1

#define LOW 0

#define BUFFER_SIZE 100

volatile char receivedData[BUFFER_SIZE];

volatile bool dataReceived = false;

volatile byte index = 0;





