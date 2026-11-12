#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        char curr = 'R';
        for (int i = 0; i < n; i++) {
            if (curr != s[i]) {
                cnt ++;
                curr = (char) s[i];
            }
            if (curr == 'R') {
                curr = 'B';
            }
            else {
                curr = 'R';
            }
        }
        cout << cnt << "
";
    }
    return 0;
}