#include <iostream>
#include <fstream>

int main() {
    std::ifstream inputFile("in.txt");

    int rows, cols;
    inputFile >> rows >> cols;


    int** array = new int* [rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            inputFile >> array[i][j];
        }
    }

    inputFile.close();


    for (int i = 0; i < rows; i++) {
        for (int j = cols - 1; j >= 0; j--) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }


    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
