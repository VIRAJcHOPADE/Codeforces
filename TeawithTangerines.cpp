#include<bits/stdc++.h>

 
using namespace std;
 
int n;
vector<int> a;
 
void solve() {
	cin >> n;
	a.resize(n);
	int ans = 0;
	for (auto &i : a) {
		cin >> i;
		ans += (i - 1) / (2 * a[0] - 1);
	}
	cout<<ans<<endl;
}
 
int main() {
	int t = 1; 
	cin >> t;
	while (t--)
		solve();
 
	return 0;
}