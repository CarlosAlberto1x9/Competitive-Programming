#include <bits/stdc++.h>
//#include "fairworkload.h"
#include "Zigzag.h"

using namespace std;

int main() {
    vector<int> s = { 374, 40, 854, 203, 203, 156, 362, 279, 812, 955, 600, 947, 978, 46, 100, 953, 670, 862, 568, 188, 67, 669, 810, 704, 52, 861, 49, 640, 370, 908, 477, 245, 413, 109, 659, 401, 483, 308, 609, 120, 249, 22, 176, 279, 23, 22, 617, 462, 459, 244 };
    int ans = ZigZag::longestZigZag(s);
    cout << ans << '\n';
}
