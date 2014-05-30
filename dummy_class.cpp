#include "dummy_class.h"


dummy_class::dummy_class():dummy_class(""){}

dummy_class::dummy_class(std::string portName)
{
    port.close();
    port.setPort(portName);
    port.setBaudrate(115200);
    port.setTimeout(10000000,10000000,10000000,10000000,10000000);
    port.open();
}
bool dummy_class::dummy_write(unsigned char data)
{
    if(port.isOpen())
    {
        port.write(&data,sizeof(data));
        return true;
    }
    else
        return false;
}
bool dummy_class::dummy_read()
{
    unsigned char data[PACKET_LENGTH] = {0};
    bool ret = false;
    if(port.available() >= PACKET_LENGTH)
    {
        port.read(data,sizeof(data));
        ret = true;
    }
    return ret;
}

