#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    map<char, int> mp = {
        {'A', 0},
        {'C', 0},
        {'G', 0},
        {'T', 0},
    };

    for(int i = 0; i < n.length(); i++) {
        mp[n[i]]++;
    }

    int mx = 0;
    for(auto x: mp) {
        mx = max(mx, x.second);
    }

    cout << mx;

    return 0;
}
