#include <bits/stdc++.h>
using namespace std;
 
bool solve(int n, int d) {
    if (d > n) {
        return false;
    }
    if (n % d == 0) {
        return true;
    }
    return solve(n, (d*10)+4) || solve(n, (d*10)+7);
}
 
int main() {
    int n;
    cin >> n;
    if (n % 4 == 0) {
        cout << "YES
";
    }
    else if (solve(n, 7) || solve(n, 4)){
        cout << "YES
";
    }
    else {
        cout << "NO
";
    }
    return 0;
}