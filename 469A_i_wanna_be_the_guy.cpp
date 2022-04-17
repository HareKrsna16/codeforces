#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, p, q;
	cin >> n >> p;
	set<int> s;
	for (int i=0; i<p; i++) {
		int temp;
		cin >> temp;
		s.insert(temp);
	}
	cin >> q;
	for (int i=0; i<q; i++) {
		int temp;
		cin >> temp;
		s.insert(temp);
	}  
	if (accumulate(s.begin(), s.end(), 0) == n*(n+1)/2) {
		cout << "I become the guy.";
	} else {
		cout << "Oh, my keyboard!";
	}
}
