#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void decode() {
	int n, x, tmp = 1;
	cin >> n;
	for(int i = 0; i < n - 1; ++i) {
		cin >> x;
		tmp = (x * tmp) % 1234567;
	}
	cout << tmp << "\n";
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
