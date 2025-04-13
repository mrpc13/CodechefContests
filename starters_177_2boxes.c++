#include <bits/stdc++.h>
using namespace std;
 int main() {
    int num;
    cin >> num;
    while (num--) {
        int X, Y, K;
        cin >> X >> Y >> K;
        int differ = abs(X - Y);
        int total = X + Y;
        int next = abs(differ - K);
        if (differ == K) {
            cout << 0 << endl;
        } 
        else if (K > total || (K % 2 != total % 2)) {
            cout << -1 << endl;
        } 
        else {
            cout << next / 2 << endl;
        }
    }
}
