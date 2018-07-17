#define _XTAL_FREQ  8000000
#include    <xc.h>
#include    "fuses.h"
 
int main(void) {
    //Configura los pines RD7-RD6-RD5-RD4 como salida digital
    TRISDbits.TRISD7 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD5 = 0;
    TRISDbits.TRISD4 = 0;
    //Configura los pines RB7-RB6-RB5-RB4 como entrada digital
    TRISBbits.TRISB7 = 1;
    TRISBbits.TRISB6 = 1;
    TRISBbits.TRISB5 = 1;
    TRISBbits.TRISB4 = 1;
    while (1) {
        if(!PORTBbits.RB4){LATDbits.LATD4=1;}else{LATDbits.LATD4=0;}
        if(!PORTBbits.RB5){LATDbits.LATD5=1;}else{LATDbits.LATD5=0;}
        if(!PORTBbits.RB6){LATDbits.LATD6=1;}else{LATDbits.LATD6=0;}
        if(!PORTBbits.RB7){LATDbits.LATD7=1;}else{LATDbits.LATD7=0;}
    }
    return 1;
}
