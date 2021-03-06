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
	ios_base::sync_with_stdio (false);
	int n, m, u, v;
	cin >> n >> m;
	vector < int > d (n);
	for (int i = 0; i < n; i++) {
		cin >> d[i];
	}
	vector < vector < int > > g (n);
	for (int i = 0; i < m; i++) {
		cin >> u >> v;
		u--, v--;
		g[u].push_back (v);
		g[v].push_back (u);
	}
	
	return 0;
}

