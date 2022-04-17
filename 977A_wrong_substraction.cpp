#include <iostream>
using namespace std;

int main() {
    int num, times;
    cin >> num >> times;

    for (; times>0; times--) {
        if (num%10 == 0)
            num/=10;
        else
            --num;
    }
    cout << num;
}
