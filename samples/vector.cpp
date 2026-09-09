#include <bits/stdc++.h>
using namespace std;

#include "../debug.h"

int main() {

    vector<int> v = {10, 20, 30};
    v.push_back(40);
    v.push_back(50);

    for(int a: v) {
        cout << a << " ";
    }

    _print(v);
    cout << endl;

    cout << v[0] << endl;
    cout << v.size() << endl;

    // sort
    sort(v.begin(), v.end());
    // reverse
    reverse(v.begin(), v.end());

    _print(v);

    int x = -50;

    cout << abs(x); // 50

    long long x = -10000000000LL;

    cout << llabs(x);

    return 0;
}
