// Unique way to output Hello World!

#include <iostream>

int main() {
    for (char c : {72, 101, 108, 108, 111, 32, 87, 111, 114, 108, 100, 33}) {
        std::cout << c;
    }
    std::cout << std::endl;
    return 0;
}

//saurabh-23232
