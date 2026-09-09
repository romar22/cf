#include <bits/stdc++.h>
using namespace std;

#include "../debug.h"

int main() {

    vector<int> v = {10, 20, 30};

    vector<int>::iterator it = v.begin();

    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << ' ';
    }

    // modify elements
    for (int &x : v) {
        x *= 2;
    }

    _print(v);

    return 0;
}
