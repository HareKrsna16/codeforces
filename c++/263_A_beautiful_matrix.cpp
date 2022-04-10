#include <iostream>

int main() {
    int i, j;
    int num = 0;
    for (i = 1;i <= 5; i++) {
        for (j=1;j<= 5;j++) {
            std::cin >> num;
            if (num==1) {
                break;
            }
        }
        if (num==1) {
            break;
        }
    }
    std::cout << abs(i-3) + abs(j-3);
    return 0;
}
