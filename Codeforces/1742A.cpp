#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, a,b,c;
    cin >> t;

    while(t--) {
        cin >> a >> b >> c;
        if( a + b == c || a + c == b || b + c == a ) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}