#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int n;
    cin >> n >> s;
    for (int i=0; i<s.length()-1; i++) {
        if (s[i] == s[i+1]) {
            --n;
        }
    }
    cout << s.length()-n;
}
