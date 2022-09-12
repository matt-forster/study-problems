#include <iostream>
#include <string>

int main () {
    int stones;

    std::cin >> stones;
    std::cout << (stones % 2 ? "Alice" : "Bob");

    return 0;
}
