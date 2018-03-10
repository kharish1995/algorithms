#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::string a("test"), b("stta");
	
	if(a.length() != b.length())
		return false;
	
	std::sort(a.begin(), a.end());
	std::sort(b.begin(), b.end());
	
	if (a != b)
		std::cout << " Not Permutations" << std::endl;
		return 0;
		
    std::cout << "Permutations" << std::endl;
	return 0;
}

