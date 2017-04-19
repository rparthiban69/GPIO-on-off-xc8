
#include <xc.h>
#define _XTAL_FREQ 4000000
__CONFIG(FOSC_INTRCIO & WDTE_OFF & PWRTE_OFF & MCLRE_OFF & BOREN_ON & CP_OFF & CPD_OFF); // FOSC_INTRCIO , WDTE=OFF , BOREN=OFF , PWRTE=ON , MCLRE=OFF , FOSC=INTRCIO

void main()
{

    TRISIO      = 0;            
    GPIO        = 0; 
    __delay_ms(300);
    GPIO4 = 1;                  // GPIO 4 pin connected to Transistor      
    __delay_ms(4000);
    GPIO4 = 0;
    __delay_ms(1000);
    while(1)
    {
        __delay_ms(1000);
        GPIO2 = 1;                   
        __delay_ms(1000);
        GPIO2 = 0;
    }

}

