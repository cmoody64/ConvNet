#include "Image.h"

using namespace convnet;

Image::Image(std::string filepath, int width, int height, int depth):
	_width(width),
	_height(height),
	_depth(depth)
{
	// try to open file at filepath and fail if file is invalid

	// allocate pixels array
	_pixels = new int**[width];
	for (int i = 0; i < _width; i++)
	{
		_pixels[i] = new int*[height];
		for (int j = 0; j < _height; j++)
		{
			_pixels[i][j] = new int[depth];
		}
	}
}


Image::~Image()
{
	for (int i = 0; i < _width; i++)
	{
		for (int j = 0; j < _height; j++)
		{
			delete[] _pixels[i][j];
		}
		delete[] _pixels[i];
	}
}
