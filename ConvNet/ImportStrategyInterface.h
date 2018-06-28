#pragma once
#include "TrainingImage.h"
#include <vector>
#include <memory>

namespace convnet
{
	class ImportStrategyInterface
	{
	public:
		~ImportStrategyInterface() {};

		virtual int remainingToImport() = 0;
		virtual std::shared_ptr<TrainingImage> getTrainingImage() = 0;		
		virtual std::vector<std::shared_ptr<TrainingImage>> getTrainingImages(int count) = 0;
	};
}