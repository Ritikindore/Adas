/*EMPLOYEE NAME:RITIK GUPTA
EMPLOYEE ID    : 140669*/

#include"adcall.h"

uint16_t speed_sensor_value(uint16_t speed_sensor)
{

int n1=120;
   if(speed_sensor>=n1)
               {
                       PORTB&=~(1<<PB3);
                       PORTB|=(1<<PB4);
                       _delay_ms(10);
                }
               else if(sensor<=n)
               {
                       PORTB&=~(1<<PB3);
                       PORTB|=(1<<PB4);
                        _delay_ms(200);
                       }//normal

          else
          {
               PORTB&=~(1<<PB3);
                PORTB&=~(1<<PB4);
          }}
           else
          {
               PORTB&=~(1<<PB3);
                PORTB&=~(1<<PB4);
                }}
