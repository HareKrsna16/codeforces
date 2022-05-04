#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	set<char> alph;
	int sum=0;
	for (int i=0; i<s.length(); i++) {
		alph.insert(toupper(s[i]));
	}
	if (accumulate(alph.begin(), alph.end(), 0) == 2015) {
		cout << "YES";
	} else {
		cout << "NO";
	}
}
