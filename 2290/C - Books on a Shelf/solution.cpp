#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        map<long long, int> mp;
 
        for (int i = 0; i < n; i++) {
            long long h;
            cin >> h;
            mp[h]++;
        }
 
        vector<long long> left;
        vector<long long> middle;
        vector<long long> right;
 
        int k = 0;
 
        for (auto [height, freq] : mp) {
            left.push_back(height);
            k++;
            if (freq >= 2) {
                right.push_back(height);
                k++;
            }
            for (int i = 0; i < freq - 2; i++) {
                middle.push_back(height);
            }
        }
 
        reverse(right.begin(), right.end());
 
        cout << k << '
';
 
        for (long long x : left)
            cout << x << ' ';
 
        for (long long x : middle)
            cout << x << ' ';
 
        for (long long x : right)
            cout << x << ' ';
 
        cout << '
';
    }
 
    return 0;
}