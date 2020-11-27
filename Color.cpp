

#include "Color.h"







RGB::RGB(byte _R = 0, byte _G = 0, byte _B = 0)
{
	R = _R;
	G = _G;
	B = _B;
}


unsigned int RGB::getRGB()
{
	return (R << 16 | G << 8 | B);
}



unsigned int RGBToBGR(const unsigned int &color)
{
	return (((color & 0xFF0000) >> 16) | ((color & 0x00FF00)) | ((color & 0x0000FF)) << 16);
}

unsigned int RGBToRGBA(const unsigned int& color, byte alpha = 255)
{
	return (((color & 0xFF0000) >> 16) << 24 | (((color & 0x00FF00) >> 8) << 16) | ((color & 0x0000FF) << 8) | alpha);
}

unsigned int RGBAToRGB(const unsigned int &color)
{
	return  color >> 8;
}

unsigned int RGBAToBGRA(const unsigned int &color)
{
	return (((color & 0x0000FF00) << 16) | ((color & 0x00FF0000) >> 16) << 16) | (((color & 0xFF000000) >> 24) << 8) | ((color & 0x000000FF));
}




