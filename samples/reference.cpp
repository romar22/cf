#include <bits/stdc++.h>
using namespace std;

#include "../debug.h"

int main() {

    int x = 10;
    int &ref = x;

    ref = 20;

    cout << x;

    return 0;
}
