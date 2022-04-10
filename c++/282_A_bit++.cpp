#include <iostream>

int main() {
    int n, x = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        char bit[3];
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
