#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
	std::string str ("thesfusdhfoidshgiudshgiushdgiojsdgoisdjosidfjgoisjgioisfg");
	std::unordered_map<char, size_t> map;
	
    for (const auto& it : str)
  	{
         map[it] +=1;
  	}
  	
  	for(const auto& it : map)
    {
    	if(it.second > 1)
    		std::cout << "Repeated" << std::endl;
    		return 0;
    }       		
    std::cout << "All unique" << std::endl;
}
