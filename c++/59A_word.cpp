#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int up_num = 0, lo_num = 0;
    for (int i=0; i<s.length(); i++) {
        if (s[i] > 96) {
            ++lo_num;
        } else {
            ++up_num;
        }
    }
    if (up_num > lo_num) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s;
}
