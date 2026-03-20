#include <iostream>
#include <fstream>

int main() {
    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;


    int* arr = new int[size];

    for (int i = 0; i < size; ++i) {
        std::cout << "arr[" << i << "] = ";
        std::cin >> arr[i];
    }

    std::ofstream outFile("out.txt");

    outFile << size << std::endl;

    for (int i = size - 1; i >= 0; --i) {
        outFile << arr[i] << (i == 0 ? "" : " ");
    }

    outFile.close();
    delete[] arr;

    return 0;
}
