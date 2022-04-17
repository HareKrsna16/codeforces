#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int anton=0, danik=0;
    for (int i=0; i<n; i++) {
        char s;
        cin >> s;
        if (s == 'A')
            ++anton;
        if (s == 'D')
            ++danik;
    }
    if (anton > danik) {
        cout << "Anton";
    } else if (danik > anton) {
        cout << "Danik";
    } else {
        cout << "Friendship";
    }
}
