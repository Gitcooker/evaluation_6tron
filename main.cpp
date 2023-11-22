/*
#include <mbed.h>

#include <bme280.h>
DigitalOut led(LED1);
I2C bus(I2C1_SDA, I2C1_SCL);
BME280 bme280(bus);
int adress = 0x76<<1;
*/
/*
int main() {
 
    while (1) {
        char cmd[1];
        cmd[0]= 0xFA;
        bus.write(adress,cmd,1); 
        bus.read(adress,cmd,1);
        printf("Le temp de composant est %f",cmd[0]);
        
        //float tmp =(float(cmd[0]<<8));
        //printf("temp = %.2f\n",tmp);
        ThisThread::sleep_for(500ms); 
    }
}
*/
/*
int main() {
    while (1) {
        // Read temperature data
        char cmd[1];
        cmd[0] = 0xFA; // BME280 temperature register address

        // Write the register address to initiate temperature reading
        bus.write(adress, cmd, 1);

        // Read the temperature data (3 bytes)
        char temp_data[3];
        bus.read(adress, temp_data, 3);


        // Print the temperature
        printf("Temperature: %.2f °C\n", temperature);

        ThisThread::sleep_for(500ms);
    }
}
*/
/*
namespace{
    #define PERIOD_MS 1000ms;
}
void ping(){
    for(int i=0;i<100;i++) printf("PING\n");
}
void pong(){
    for(int i=0;i<100;i++) printf("PONG\n");
}
void cli(){
    while(1){
    LED1=!LED1;
    this_thread::sleep_for(500ms);
    }
}

int main(){
    LED1 = 0;
   Thread thread1;
   Thread thread2;
   Thread thread3;
   thread1.start(ping);
   thread2.start(pong);
   thread3.start(cli);
   while(true){
    printf("Alive! \n");
    ThisThread::sleep_for(PERIOD_MS/ 2);
   }
   thread1.join();
   thread2.join();
}
*/
/*
#include "mbed.h"
#include "bme280.h"

using namespace sixtron;

namespace {
#define PERIOD_MS 2000ms
}

DigitalIn button(BUTTON1);
DigitalOut led(LED1);
I2C bus(I2C1_SDA, I2C1_SCL);
BME280 sensor(&bus, BME280::I2CAddress::Address1);

int main()
{
    if (!sensor.initialize()) {
        printf("BME280 init error!\n");
    }

    // Configure
    sensor.set_sampling();

    while (true) {
        printf("Temperature: %.3f\n", sensor.temperature());
        printf("Humidité: %f\n", sensor.humidity());
        ThisThread::sleep_for(PERIOD_MS / 2);
    }
}*/
