#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

int main()
{
	std::ifstream file("in.txt");
	std::string word;
	while (!(file >> word).eof())
	{
		std::cout << word << std::endl;
	}
	return 0;
}
