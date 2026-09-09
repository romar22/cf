#include <bits/stdc++.h>
using namespace std;

// #include "debug.h"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;

    cin >> a >> b;

    int res = 0;
    while(a <= b) {
        a *= 3;
        b *= 2;
        res++;
    }

    cout << res;


    return 0;
}
