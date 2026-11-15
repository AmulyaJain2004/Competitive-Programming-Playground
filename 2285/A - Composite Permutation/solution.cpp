#include <bits/stdc++.h>
using namespace std;
 
/* Concept => Took help :( But arrived at conclusion myself...
p = [1, 2, 3, 4, 5, ..., n]
 
In this identity permutation, for every i > 1:
i * p[i] = i²
 
and since i > 1, i² is composite.
 
The only failure is:
i = 1 → 1 * 1 = 1
 
So find a composite number and swap it with 1.
*/
 
bool isComposite(int num) {
    if (num <= 3) {
        return false;
    }
 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return true;
        }
    }
 
    return false;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> p(n);
 
        // Identity permutation
        for (int i = 0; i < n; i++) {
            p[i] = i + 1;
        }
 
        bool flag = false;
 
        for (int i = 1; i < n; i++) {
            if (isComposite(p[i])) {
                swap(p[i], p[0]);
                flag = true;
                break;
            }
        }
 
        if (flag == false) {
            cout << -1 << "
";
        } 
        else {
            for (int i = 0; i < n; i++) {
                cout << p[i] << " ";
            }
            cout << "
";
        }
    }
 
    return 0;
}