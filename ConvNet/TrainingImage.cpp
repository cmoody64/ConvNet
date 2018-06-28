#include "TrainingImage.h"

using namespace convnet;

TrainingImage::TrainingImage(std::string label, std::string filepath, int width, int height, int depth):
	Image(filepath, width, height, depth),
	_label(label)
{
}


TrainingImage::~TrainingImage()
{
}
