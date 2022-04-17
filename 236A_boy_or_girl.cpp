#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cin >> name;
    int num = 0, count[256];
    for (int i=0; i< 256; i++)
        count[i] = 0;
    for (int i=0; i<name.length(); i++) {
        ++count[(int)name[i]];
    }
    for (int i=0; i<256; i++) {
        if (count[i] > 0) {
            ++num;
        }
    }
    if (num % 2 != 0)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
}
