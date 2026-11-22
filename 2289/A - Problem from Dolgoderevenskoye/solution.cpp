#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll x;
        cin >> x;
        int k = 0;
        while (x % 2 == 0) {
            k++;
            x /= 2;
        }
        if (k == 1) {
            cout << "No
";
        }
        else {
            cout << "Yes
";
        }
    }
    return 0;
}