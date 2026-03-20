/*
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

int main()
{
	std::ifstream file("in.txt");
    int n;
    std::cin >> n;

    int* array = new int[n];

    for (int i = 0; i < n; ++i) {
        std::cin >> array[i];
    }
    for (int i = n - 1; i >= 0; --i) {
        std::cout << array[i];
        if (i > 0) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    delete[] array;
    return 0;
}
*/
