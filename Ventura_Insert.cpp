#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int insertPosition;
    int newValue;

    std::cout << "Enter the position where you want to insert the integer between 0-10 (0-" << size << "): ";
    std::cin >> insertPosition;

    if (insertPosition < 0 || insertPosition > size) {
        std::cout << "Invalid position. Please enter a valid position between 0 and " << size << "." << std::endl;
        return 1; // Exit with an error code
    }

    std::cout << "Enter the new integer that you want to insert: ";
    std::cin >> newValue;

    
    for (int i = size - 1; i >= insertPosition; i--) {
        arr[i + 1] = arr[i];
    }

    
    arr[insertPosition] = newValue;

    size++; 

    
    std::cout << "Final array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
