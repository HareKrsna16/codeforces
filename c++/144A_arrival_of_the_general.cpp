#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int x;
	int max=0;
	int max_index=0;
	int min=1000;
	int min_index=0;
	for (int i=0; i<n; i++) {
		cin >> x;
		if (x > max) {
			max = x;
			max_index = i;
		}
		if (x <= min) {
			min = x;
			min_index = i;
		}
	}
	if (max_index > min_index) {
		cout << max_index - 2 + n - min_index;
	} else {
		cout << max_index - 1 + n - min_index;
	}
}
