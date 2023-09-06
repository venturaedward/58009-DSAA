#include <iostream>
using namespace std;
int main() {
    int num[] = {5, 4, 3, 2, 1};


    int length = sizeof(num) / sizeof(num[0]);

    std::cout << "The Lenght: " << length << std::endl;

    return 0;
}
