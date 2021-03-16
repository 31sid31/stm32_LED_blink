#include <mbed.h>
#include <rtos.h>

uint32_t WAIT_TIME = 500;

DigitalOut myled(LED1);

void led_blink()
{
  myled = !myled;
  ThisThread::sleep_for(WAIT_TIME);
}

int main()
{
  while (true)
  {
    led_blink();
  }
}