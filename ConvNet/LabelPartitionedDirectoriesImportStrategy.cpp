#include "LabelPartitionedDirectoriesImportStrategy.h"

using namespace convnet;

LabelPartitionedDirectoriesImportStrategy::LabelPartitionedDirectoriesImportStrategy()
{
}


LabelPartitionedDirectoriesImportStrategy::~LabelPartitionedDirectoriesImportStrategy()
{
}

int LabelPartitionedDirectoriesImportStrategy::remainingToImport()
{
	return 0;
}

std::shared_ptr<TrainingImage> LabelPartitionedDirectoriesImportStrategy::getTrainingImage()
{
	return std::shared_ptr<TrainingImage>();
}

std::vector<std::shared_ptr<TrainingImage>> LabelPartitionedDirectoriesImportStrategy::getTrainingImages(int count)
{
	return std::vector<std::shared_ptr<TrainingImage>>();
}
