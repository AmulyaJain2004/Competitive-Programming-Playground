#include <iostream>
using namespace std;
 
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int maxTime = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '#') {
                cnt ++;
            }
            else if (s[i] == '*') {
                maxTime = max(maxTime, ((cnt + 1)/2));
                cnt = 0;
            }
        }
        maxTime = max(maxTime, ((cnt + 1)/2));
        cout << maxTime << endl;
    }
    return 0;
}