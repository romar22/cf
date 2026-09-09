#include <bits/stdc++.h>
using namespace std;

// #include "debug.h"


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, n, a, cnt = 0;

    cin >> n >> h;


    while (n--) {
        cin >> a;
        if(a > h) {
            cnt += 2;
        } else {
            cnt += 1;
        }
    }

    cout << cnt;

    return 0;
}
