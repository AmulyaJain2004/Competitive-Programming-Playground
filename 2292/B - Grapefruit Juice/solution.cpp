#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;
        vector<ll>a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<ll>dp(n+1, 0);
        for (int i = 1; i <= n; i ++) {
            ll temp = 0;   
            if (i >= k){
                temp = p + dp[i-k];
            }
            dp[i] = max(dp[i-1] + a[i-1], temp);
        }
        cout << dp[n] << "
";
    }
    return 0;
}