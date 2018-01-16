#include <sorting/sort.h>

Sort::Sort(std::vector<int> data) : data_(data)
{

}

void Sort::bubble_sort()
{
    for(unsigned int i = 0; i < data_.size() - 1; ++i){
        for(unsigned int j = 0; j < data_.size() - i - 1; ++j){
            if(data_[j] > data_[j+1])
                std::swap(data_[j], data_[j+1]);
        }
    }
    printArray();
}

void Sort::insertion_sort()
{
    for(unsigned int i = 1; i < data_.size(); ++i){
        int key = data_[i];
        unsigned int j = i-1;
        while(j >= 0 && data_[j] > key){
            data_[j+1] = data_[j];
            j = j-1;
        }
        data_[j+1] = key;
    }
    printArray();
}

void Sort::selection_sort()
{
    for (unsigned int i = 0; i < data_.size(); ++i){
        unsigned int min_idx = i;
        for (unsigned j = i+1; j < data_.size(); ++j)
          if (data_[j] < data_[min_idx])
            min_idx = j;
        std::swap(data_[min_idx], data_[i]);
    }
    printArray();
}

Sort::~Sort()
{

}
