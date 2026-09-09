#include <bits/stdc++.h>
using namespace std;

#include "../debug.h"

int main() {

    vector<pair<int, int>> points;

    points.push_back({10, 20});
    points.push_back({30, 40});

    for(pair s: points) {
        cout << s.first << " " << s.second << endl;
    }

    _print(points);

    return 0;
}
