# Some examples integrating the SSD1283A into various projects

> A collection of integrations for the SSD1283A along with with relevant datasheets and some basic power characterization.

<img src="https://raw.githubusercontent.com/dretay/ssd1283a_examples/master/SSD1283A.jpg" >


### Links ###
  *  [SSD1283A Controller Datasheet](https://raw.githubusercontent.com/dretay/ssd1283a_examples/master/SSD1283ADatasheet.pdf)
  *  [H016IT01 TFT Datasheet](https://raw.githubusercontent.com/dretay/ssd1283a_examples/master/H016IT01.pdf)

### Projects ###
#### Arduino Leonardo
Very simple LCDWIKI-based example on top of an [Arduino Leonardo](https://raw.githubusercontent.com/dretay/ssd1283a_examples/master/example.ino)
- **NOTE** the leonardo does not support hardware SPI, so this uses software spi.

## Power Characterization
> Some basic information from fooling around
- No backlight
-- 3mA
- Backlight 10%
-- 4mA
- Backlight 30%
-- 6.5mA
- Backlight 50%
-- 9.2mA
- Backlight 100%
-- 15.8mA
