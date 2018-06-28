#pragma once
#include "ImportStrategyInterface.h"

// expected format

// <master directory>
//	 <label name>
//		image.jpeg
//		image.jpeg
//	 <label name>
//		image.jpeg
//		image.jpeg

namespace convnet
{

	class LabelPartitionedDirectoriesImportStrategy : public ImportStrategyInterface
	{
	public:
		LabelPartitionedDirectoriesImportStrategy();
		virtual ~LabelPartitionedDirectoriesImportStrategy();

		virtual int remainingToImport();
		virtual std::shared_ptr<TrainingImage> getTrainingImage();
		virtual std::vector<std::shared_ptr<TrainingImage>> getTrainingImages(int count);
	};

}

