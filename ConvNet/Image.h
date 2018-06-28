#pragma once
#include <string>

namespace convnet
{

	class Image
	{
	public:
		Image(std::string filepath, int width, int height, int depth = DEFAULT_DEPTH);
		virtual ~Image();

	protected:
		int _width;
		int _height;
		int _depth; // refers to # of color channels
		// 3D array: width X height X depth
		int ***_pixels;

		static const int DEFAULT_DEPTH = 3; // default color channels - RGB
	};

}
