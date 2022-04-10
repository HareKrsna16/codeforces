#include <iostream>
#include <string>

int main() {
    int n, x = 0;
    std::cin >> n;
    std::string bit;
    for (int i = 0; i < n; i++) {
        std::cin >> bit;
        if (bit[1] == '+') {
            ++x;
        }
        if (bit[1] == '-') {
            --x;
        }
    }
    std::cout << x;
    return 0;
}
