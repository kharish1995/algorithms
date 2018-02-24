#include <sorting/sort.h>

Sort::Sort(std::vector<int> data) : data_(data)
{

}

void Sort::bubble_sort()
{
    for(const auto& i : data_){
        for(unsigned int j = 0; j < data_.size() - (&i - &data_.at(0)) - 1; ++j){
            if(data_.at(j) > data_.at(j+1))
                std::swap(data_.at(j), data_.at(j+1));
        }
    }
    printArray();
}

void Sort::insertion_sort()
{
    for(unsigned int i = 1; i < data_.size(); ++i){
        int key = data_.at(i);
        unsigned int j = i - 1;
        while(j >= 0 && data_.at(j) > key){
            data_.at(j+1) = data_.at(j);
            j = j-1;
        }
        data_.at(j+1) = key;
    }
    printArray();
}

void Sort::selection_sort()
{
    for (const auto& i : data_){
        unsigned int min_idx = &i - &data_.at(0);
        for (unsigned j = i+1; j < data_.size(); ++j)
          if (data_.at(j) < data_.at(min_idx))
            min_idx = j;
        std::swap(data_.at(min_idx), const_cast<int&>(i));
    }
    printArray();
}

void Sort::merge_sort()
{

}

Sort::~Sort()
{

}
