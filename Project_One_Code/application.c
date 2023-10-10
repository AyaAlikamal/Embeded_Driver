/* 
 * File:   application.c
 * Author: AyaAli
 * Created on September 22, 2023, 10:24 AM
 */
#include "application.h"

led_t led_1 ={
.Port_Name = PORTC_INDEX,
.pin = PIN0,
.led_statues = LED_OFF
};

led_t led_2 ={
.Port_Name = PORTC_INDEX,
.pin = PIN1,
.led_statues = LED_OFF
};

led_t led_3 ={
.Port_Name = PORTC_INDEX,
.pin = PIN3,
.led_statues = LED_OFF
};

led_t led_4 ={
.Port_Name = PORTC_INDEX,
.pin = PIN4,
.led_statues = LED_OFF
};

//direction_t led_1_statues;
//logic_t btn1_statues;
//uint_8 portc_direction_statues , portc_logic_statues;

int main() {
  while(1){
      application_initialize();  
      led_turn_on(&led_1);
      led_turn_on(&led_2);
      led_turn_on(&led_3);
      led_turn_on(&led_4);
       _delay(500);
      led_turn_off(&led_1);
      led_turn_off(&led_2);
      led_turn_off(&led_3);
      led_turn_off(&led_4);  
      _delay(500); 
  }
  return (EXIT_SUCCESS);
}
void application_initialize(void){
 Std_ReturnType ret = E_NOT_OK;
 ret = led_initialize(&led_1);
 ret = led_initialize(&led_2);
 ret = led_initialize(&led_3);
 ret = led_initialize(&led_4);
 
    
// GPIO initialization and implementing
//   ret = gpio_port_direction_intialize(PORTC_INDEX, 0x00);
//   ret = gpio_port_get_direction_status(PORTC_INDEX, &portc_direction_statues);
//   ret = gpio_port_write_logic(PORTC_INDEX, 0xAA);
//   ret = gpio_port_read_logic(PORTC_INDEX, &portc_logic_statues); 
//   _delay(5000);
//   ret = gpio_port_write_logic(PORTC_INDEX, 0x55);
//   ret = gpio_port_read_logic(PORTC_INDEX, &portc_logic_statues);  
//   _delay(5000);   
  }
