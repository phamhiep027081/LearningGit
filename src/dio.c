#include <sdtio.h>
#inclde <stdint.h>
#include <dio.h>

void setPin(Dio *pA, uint8_t pin)
{
    pA->STD |= (uint32_t)(1 << pin);
}
