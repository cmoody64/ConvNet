#pragma once
#include "Image.h"
#include <string>

namespace convnet
{
	class ConvolutionalNueralNetwork
	{
	public:
		ConvolutionalNueralNetwork();
		~ConvolutionalNueralNetwork();

		void trainOnImage(Image image);
		std::string predict(Image image);
	};

}
