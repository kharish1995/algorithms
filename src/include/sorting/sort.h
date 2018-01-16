/*
 * This code is developed to implement the Sorting Algorithms
 * The authors of this code is Harish Karunakaran
 * The code is available at https://github.com/HarishKarunakaran/Algorithms
 *
 */

#ifndef SORT_H
#define SORT_H

#include <iostream>
#include <vector>
#include <cmath>
#include <memory>

class Sort
{
    /**
             * \brief vector data to be sorted
             */
    std::vector<int> data_;

    /**
             * \brief Helper function to display data
             */
    void printArray()
    {
       for (const auto& value : data_)
           std::cout << value << '\t';
       std::cout << std::endl;
    }
public:
    /**
             * \brief Constructor to get vector
             */
    Sort(std::vector<int>);
    /**
             * \brief Merge Sort
             */
    void merge_sort();
    /**
             * \brief Bubble Sort
             */
    void bubble_sort();
    /**
             * \brief Insertion Sort
             */
    void insertion_sort();
    /**
             * \brief Quick Sort
             */
    void quick_sort();
    /**
             * \brief Selection Sort
             */
    void selection_sort();
    /**
             * \brief Heap Sort
             */
    void heap_sort();
    /**
             * \brief Destructor
             */
    ~Sort();
};

#endif // SORT_H
