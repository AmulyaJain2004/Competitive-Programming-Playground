#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int a;
        int b;
        int c;
        cin >> a >> b >> c;
        if (c == b + 1 && b == a + 1) {
            cout << "YES
";
        }
        else {
            cout << "NO
";
        }
    }
    return 0;
}