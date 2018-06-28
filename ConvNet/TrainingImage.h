#pragma once
#include "Image.h"
#include <string>

namespace convnet
{

	class TrainingImage : public Image
	{
	public:
		TrainingImage(std::string label, std::string filepath, int width, int height, int depth = DEFAULT_DEPTH);
		~TrainingImage();

	private:
		std::string _label;
	};

}
