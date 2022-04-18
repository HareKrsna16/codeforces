#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m{0};
	cin >> n;
	for (int i=0; i<n; i++) {
		int temp {0};
		cin >> temp;
		m += temp;
	}
	cout << (float)m/(n*100) * 100;
}
