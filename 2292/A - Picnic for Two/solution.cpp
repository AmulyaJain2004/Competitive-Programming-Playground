#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, a, b;
        cin >> l >> a >> b;
        vector<int> av(l, 0);
        vector<int> bv(l, 0);
        int curr = 0;
        av[curr] = 1;
        curr = (curr + a) % l;
        while (curr != 0) {
            av[curr] = 1;
            curr = (curr + a) % l;
        }
        curr = 0;
        bv[curr] = 1;
        curr = (curr + b) % l;
        while (curr != 0) {
            bv[curr] = 1;
            curr = (curr + b) % l;
        }
        int cnt = 0;
        for (int i = 0; i < l; i++) {
            if (av[i] && bv[i]) {
                cnt ++;
            }
        }
        cout << cnt << "
";
    }
    return 0;
}