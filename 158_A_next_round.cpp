#include <iostream>

int main() {
    int n, k, adv = 0;
    std::cin >> n >> k;
    
    int scores[n];
    for (int i = 0; i < n; i++) {
        std::cin >> scores[i]; 
    }
    k = scores[k-1];

    for (int i = 0; i < n; i++) {
        if (scores[i] >= k && scores[i] != 0) {
            adv++;
        }
        else if (scores[i] < k)
        {
            break;
        }
  
    }

    std::cout << adv;
}