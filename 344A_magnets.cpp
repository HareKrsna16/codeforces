#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, grp(0);
	cin >> n;
	int a=0, b=-1;
	for (int i=0; i<n; i++) {
		cin >> b;
		if (a != b) {
			a = b;
			++grp;
		}
	}
	cout << grp;
}
