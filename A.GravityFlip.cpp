#include <bits/stdc++.h>
using namespace std;

// #include "debug.h"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;

    cin >> t;

    vector<int> v;

    for(int i = 0; i < t; i++) {
        cin >> n;
        v.push_back(n);
    }

    sort(v.begin(), v.end());

    for(int a: v) {
        cout << a << " ";
    }

    return 0;
}
