
// Color Converter - Gorkem95
// 2018



#ifndef _COLOR_H_
#define _COLOR_H_




//typedef unsigned char byte;


class RGB
{
public:
	byte R;
	byte G;
	byte B;
	unsigned int getRGB();
	RGB(byte, byte, byte);
  
};


unsigned int RGBToBGR(const unsigned int&);
unsigned int RGBToRGBA(const unsigned int&, byte);
unsigned int RGBAToRGB(const unsigned int&);
unsigned int RGBAToBGRA(const unsigned int&);








#endif