#include <bits/stdc++.h>
using namespace std;

int main() {
    int year;
    cin >> year;
    set<int> s;
    year+=1;
    for(int i=year;;++year) {
        i=year;
        while(i!=0) {
            s.insert(i%10);
            i/=10;
        }
        if (s.size() == 4)
            break;
        s.clear();
    }
    cout << year;
}
