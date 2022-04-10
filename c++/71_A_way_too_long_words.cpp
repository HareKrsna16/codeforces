#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    for (int i {}; i < n; i++) {
        std::string str, newstr;
        std::cin >> str;
        if (std::size(str) > 10) {
            newstr = str[0] + std::to_string(std::size(str) - 2) + str[std::size(str) - 1];
            str = newstr;
        }
        std::cout << str << std::endl;
    }
    return 0;
}