#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int mod = 1e9 + 7;

void add_self (int & a, int b) {
	a += b;
	if (a >= mod) a -= mod;
}

int mul (int a, int b) {
	return (int) (((ll) a * b) % mod);
}

int power (int a, int k) {
	int ans = 1;
	while (k >= 1) {
		if (k & 1) ans = mul (ans, a);
		a = mul (a, a);
		k >>= 1;
	}
	return ans;
}

int inverse (int a) {
	return power (a, mod - 2);
}

int main() {
	int n, k, m;
	cin >> n >> k >> m;
	int sum = 0, x;
	for (int i = 1; i < n; i++) {
		cin >> x;
		sum += x;
	}
	int req = max (0, m * n - sum);
	if (req > k) req = -1;
	cout << req << endl;
	return 0;
}

