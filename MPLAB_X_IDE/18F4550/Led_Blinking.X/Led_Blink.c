#define _XTAL_FREQ  8000000
#include    <xc.h>
#include    "fuses.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void main(){
TRISB = 0; //SALIDA
        
  while (1)
  {
 PORTB = 3;
 __delay_ms(1000);
 PORTB = 0;   
 __delay_ms(1000);
}
 
}
