#include <sorting/sort.h>

int main()
{
    std::vector<int> data = {21, 5, 2, 1, 4};
    Sort a(data);
    a.bubble_sort();
    a.insertion_sort();
    a.selection_sort();
    return 0;
}
