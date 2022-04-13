#include <iostream>
#include <string>

int main() {
    std::string s1, s2;
    std::cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    if (s1.compare(s2) > 0) {
        std::cout << 1;
    } else if (s1.compare(s2) < 0) {
        std::cout << -1;
    } else {
        std::cout << 0;
    }
}
