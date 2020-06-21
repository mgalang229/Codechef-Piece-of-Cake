#include <bits/stdc++.h>

using namespace std;

void decode() {
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	double cnt = 1;
	double m = 0;
	for(int i = 1; i <= (int)s.size(); ++i) {
		if(s[i] == s[i-1]) {
			cnt++;
		}
		else {
			cnt = 1;
		}
		m = max(m, cnt);
	}
	double n = (int)s.size();
	if(m == n / 2.0) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
