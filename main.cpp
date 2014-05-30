#include <iostream>
#include <chrono>
#include <unistd.h>
#include "serial/serial.h"
#include "dummy_class.h"
using namespace std;

int main()
{
    std::chrono::time_point<std::chrono::system_clock> start, end;
    std::string portName = "/dev/ioRevA";
    serial::Serial port;
    port.setPort(portName);
    port.setBaudrate(115200);
    port.setTimeout(10,10,10,10,10);
    port.open();
    while(1)
    {
        start = std::chrono::system_clock::now();
        port.write("adfkld");
        port.read(22);
        end = std::chrono::system_clock::now();
        std::chrono::duration<double> elapsed_seconds = end-start;
        cout << "time:" << elapsed_seconds.count() << "\n";
        usleep(1000);
    }
//    std::chrono::time_point<std::chrono::system_clock> start, end;
//    std::string portName = "/dev/ioRevA";
//    dummy_class dPort(portName);
//    while(1)
//    {
//        start = std::chrono::system_clock::now();
//        dPort.dummy_write(0x33);
//        dPort.dummy_read();
//        end = std::chrono::system_clock::now();
//        std::chrono::duration<double> elapsed_seconds = end-start;
//        cout << "time:" << elapsed_seconds.count() << "\n";
//        usleep(1000);
//    }
}

