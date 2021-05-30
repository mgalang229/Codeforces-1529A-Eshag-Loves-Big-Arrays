#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		int mn = INT_MAX;
		// view the image in this repository for better understanding
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			// find the smallest number, because this number will not be deleted
			mn = min(mn, a[i]);
		}
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] != mn) {
				// if the current number is not the smallest, then this will be deleted
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}
