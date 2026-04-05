#include "uart.h"
#include "print.h"
#include "debug.h"
#include "lib.h"

void KMain(void)
{
    // uint64_t value = 0x1234567890ABCDEF;

    init_uart();
    //write_string("Hello, raspberry pi\r\n");
    printk("Hello, Chris Arm OS\r\n");
    printk("We are at EL %u\r\n", (uint64_t)get_el());
    ASSERT(0);
    // printk("Test number %d\r\n", value);
    // printk("Test number %x\r\n", value);
    while(1) {
        ;
    }
}