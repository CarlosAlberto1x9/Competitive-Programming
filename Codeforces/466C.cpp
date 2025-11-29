#include <iostream>
#include <numeric>
#include <vector>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    ll a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    ll x = accumulate(a, a + n, 0);
    
    if(x % 3 == 0) {
        ll cnt = 0;
        ll parte = x/3;
        bool startCount = false;
        int posibleSeparacion = 1;
        int index = 0;
        while(index < n){
            cout << "Index: " << index << " cnt: " << cnt << '\n';
            cnt += a[index];
            if (cnt == parte) {
                startCount = true;
            }
            else if(cnt == parte && a[index] == 0 && startCount) { 
                posibleSeparacion++;
            } else if (startCount && (cnt < parte || cnt > parte))   {
                cnt = a[index];
                if ( cnt == parte) {
                    startCount = true;
                } else {
                    startCount = false;
                }
            }
            index++;
        }
        cout << posibleSeparacion << '\n';
    } else {
        cout << 0 << '\n';
    }
    return 0;
}