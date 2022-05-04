#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	set<char> dis;
	for (int i=0; i<s.length(); i++) {
		if ( s[i] > 96 && s[i] < 123) {
			dis.insert(s[i]);
		}
	}
	cout << dis.size()<< endl;
}
