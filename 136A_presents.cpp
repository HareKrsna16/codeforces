#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int gifts[n];
    int output[n];
    for (int i=0; i<n; i++) {
        cin >> gifts[i];
    }
    for (int i=0; i<n; i++) {
        output[gifts[i]-1] = i+1;
    }
    for (int i=0; i<n; i++) {
        cout << output[i] << " ";
    }
}
