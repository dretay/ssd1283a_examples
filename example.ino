#define MODEL SSD1283A
#define CS   A5
#define RST  A4
#define CD   A3
#define MOSI A2
#define SCK  A1
#define LED  A0

LCDWIKI_SPI mylcd(MODEL,CS,CD, MISO, MOSI, RST, SCK, LED); 
  
#define  BLACK   0x0000
#define BLUE    0x001F
#define RED     0xF800
#define GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF

void setup() 
{
  mylcd.Init_LCD();
  mylcd.Fill_Screen(BLACK);
}

void loop() 
{
  mylcd.Set_Text_Mode(0);
  
  mylcd.Fill_Screen(0x0000);
  mylcd.Set_Text_colour(RED);
  mylcd.Set_Text_Back_colour(BLACK);
  mylcd.Set_Text_Size(1);
  mylcd.Print_String("Hello World!", 0, 0);
  mylcd.Print_Number_Float(01234.56789, 2, 0, 8, '.', 0, ' ');  
  mylcd.Print_Number_Int(0xDEADBEF, 0, 16, 0, ' ',16);

  mylcd.Set_Text_colour(GREEN);
  mylcd.Set_Text_Size(2);
  mylcd.Print_String("Hello", 0, 32);
  mylcd.Print_Number_Float(01234.56789, 2, 0, 48, '.', 0, ' ');  
  mylcd.Print_Number_Int(0xDEADBEF, 0, 64, 0, ' ',16);

  mylcd.Set_Text_colour(BLUE);
  mylcd.Set_Text_Size(3);
  mylcd.Print_String("Hello", 0, 86);
  mylcd.Print_Number_Float(01234.56789, 2, 0, 110, '.', 0, ' ');  
  mylcd.Print_Number_Int(0xDEADBEF, 0, 134, 0, ' ',16);

  delay(3000);
}
