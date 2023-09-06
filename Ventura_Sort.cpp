#include <iostream>
using namespace std;
int main() {
    int numbers[] = {5, 4, 3, 2, 1};
    int size = sizeof(num) / sizeof(num[0]);


    for (int i = 0; i < size / 2; i++) {
        int temp = num[i];
        num[i] = num[size - 1 - i];
        num[size - 1 - i] = temp;
    }

 
    std::cout << "Reversing the array: ";
    for (int i = 0; i < size; i++) {
        std::cout << num[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
