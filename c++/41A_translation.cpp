#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    if (s2 == string(s1.rbegin(),s1.rend())) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
