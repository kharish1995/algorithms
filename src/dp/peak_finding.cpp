#include <iostream>
#include <vector>

int main()
{
	int size;
	std::cout << "Enter size of array: " << std::endl;
	std::cin >> size;
	std::vector<int> arr(size);
	std::cout << "Enter elements of an array: " << std::endl;
	for(unsigned int i = 0; i < size; i++)
		std::cin >> arr[i];
	
	if(arr[0] > arr[1])
		std::cout << "The peak element is: " << arr[0] << std::endl;
	
	for(unsigned int i = 1; i < size; i++)
	{
		if((arr[i] > arr[i-1]) && (arr[i] > arr[i+1]))
			std::cout << "The peak element is: " << arr[i] << std::endl;
		
	}
	
	return 0;
}
