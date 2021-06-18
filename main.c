/*
 * File:   main.c
 * Author: uniti
 * 
 * Programa para demonstrar o uso das portas de entrada e saíde de dados do PIC18F4520
 * 
 * Created on 18 de Junho de 2021, 09:49
 */


#include <xc.h>

#define _XTAL_FREQ 4000000

void pisca_led();

void main(void) {
   
   //configurar a direção dos dados 
   // 1 - INPUT
   // 0 - OUTPUT
   
   TRISB = 0b11111110;
   TRISDbits.RD0 = 1;
   while(1){
      if(PORTDbits.RD0){
      pisca_led();
      }
      __delay_ms(300);
   }
   
   
   
   return;
}
void pisca_led() {
    //Escreve na porta RB0
      //RB0 = ~LATB0;
      PORTBbits.RB0 = ~LATBbits.LB0;
      
      return;
   
}