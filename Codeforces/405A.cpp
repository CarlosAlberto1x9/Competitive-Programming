#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a + n);
    for(int i = 0; i < n; ++i) cout << a[i] << ' ';
    cout << '\n';
    return 0;
}