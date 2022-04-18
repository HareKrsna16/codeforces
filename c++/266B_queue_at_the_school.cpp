#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    string s, a;
    cin >> n >> t >> s;
    a = s;
    for (int j=0; j<t;j++) {
        for (int i=0; i<n-1;i++) {
            if (s[i] == 'B' && s[i+1] == 'G') {
                a[i] = 'G';
                a[i+1] = 'B';
            }
        }
        s = a;
    }
    cout << a;
}
