#include <mega32a.h>
#include <delay.h>
#define xtal 8000000
//================================ LCD CONFIGURATIONS ======================================= 
 #define PORTRAIT

 #define LCD_CONTROLPORT_DDR  DDRD 
 #define LCD_CONTROLPORT_PORT PORTD
 #define LCD_CONTROLPORT_PIN  PIND 
 
 #define LCD_RST_DDR  DDRD
 #define LCD_RST_PORT PORTD
 #define LCD_RST_PIN  4
 
 #define LCD_RS_DDR  DDRD
 #define LCD_RS_PORT PORTD 
 #define LCD_RS_PIN  1

 #define LCD_CS_DDR  DDRD
 #define LCD_CS_PORT PORTD 
 #define LCD_CS_PIN  0
 
 #define LCD_RD_DDR  DDRD
 #define LCD_RD_PORT PORTD 
 #define LCD_RD_PIN  4
 
 #define LCD_WR_DDR  DDRD
 #define LCD_WR_PORT PORTD 
 #define LCD_WR_PIN  3
 
 #define LCD_DATAPORT_MSB_DDR   DDRA
 #define LCD_DATAPORT_MSB_PORT  PORTA 
 #define LCD_DATAPORT_MSB_PIN   PINA 
 
 #define LCD_DATAPORT_LSB_DDR   DDRC
 #define LCD_DATAPORT_LSB_PORT  PORTC
 #define LCD_DATAPORT_LSB_PIN   PINC



 //================================================================  
 
#include "tftlcd_functions.h"

void main(void)
{     
// Port B initialization
// Func7=In Func6=In Func5=In Func4=In Func3=In Func2=Out Func1=Out Func0=Out 
// State7=T State6=T State5=T State4=T State3=T State2=0 State1=0 State0=0 
PORTB=0x00;
DDRB=0x07;
  
 lcd_init();
 lcd_background_color(GREEN);
while (1)
      {
      lcd_clear_screen();
      lcd_gotoxy(10,5);
      lcd_putsf(" TFT LCD 2.8' ",0x0000,0,RED);
      lcd_gotoxy(7,7);
      lcd_putsf(" WWW.NAMINIC.COM ",0x0000,0,RED); 
      delay_ms(2000);
      lcd_clear_screen();
      lcd_background_color(BLACK);
      lcd_draw_line(5,5,50,50,0xFFFF);
      lcd_draw_rectangle(30,30,80,80,0,0XFFFF);
      lcd_draw_circle(150,150,25,0,0xffff);
      delay_ms(2000);
      }
}
