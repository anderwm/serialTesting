#ifndef DUMMY_CLASS_H
#define DUMMY_CLASS_H
#include "serial/serial.h"

class dummy_class
{
    static const int PACKET_LENGTH = 43;
    public:
        dummy_class();
        dummy_class(std::string);
        bool dummy_write(unsigned char);
        bool dummy_read();
    private:
        serial::Serial port;
};

#endif // DUMMY_CLASS_H
