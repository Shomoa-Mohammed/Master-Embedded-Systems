#include "uart.h"

unsigned char string_buffer [50] = "Learn-in-Depth : shomoa";

void main(void)
{
  uart_send_string(string_buffer);
}