#include "uart.h"
#include "print.h"

void KMain(void)
{
    uint64_t value = 0x1234567890ABCDEF;

    init_uart();
    //write_string("Hello, raspberry pi\r\n");
    printk("Hello, Chris Arm OS\r\n");
    printk("Test number %d\r\n", value);
    printk("Test number %x\r\n", value);
    while(1) {
        ;
    }
}