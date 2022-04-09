#include <iostream>

int main() {

    int n, sol=0;
    std::cin >> n;
    for (int i = 0 ; i < n; i++) {
        int a, b, c;
        std::cin >> a >> b >> c;
        if ( a+b+c >= 2 ) {
            sol++;
        }
    }
    std::cout << sol;
}