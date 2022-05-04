#include <iostream>
using namespace std;

int main() {
    int n, minimum_possible_capacity {0}, current_capacity{0};
    cin >> n;
    int exit=0, enter=0;
    for (int i=0; i<n; i++) {
        cin >> exit >> enter;
        current_capacity = current_capacity-exit+enter;
        if (current_capacity > minimum_possible_capacity)
            minimum_possible_capacity = current_capacity;
    }
    cout << minimum_possible_capacity;
}
