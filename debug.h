#ifndef DEBUG_H
#define DEBUG_H

#include <bits/stdc++.h>
using namespace std;

// ================= BASIC =================
void _print(int x) { cerr << x; }
void _print(long x) { cerr << x; }
void _print(long long x) { cerr << x; }
void _print(unsigned x) { cerr << x; }
void _print(unsigned long long x) { cerr << x; }
void _print(float x) { cerr << x; }
void _print(double x) { cerr << x; }
void _print(char x) { cerr << '\'' << x << '\''; }
void _print(const string &x) { cerr << '\"' << x << '\"'; }
void _print(bool x) { cerr << (x ? "true" : "false"); }

// ================= PAIR =================
template <class T, class V>
void _print(const pair<T, V> &p) {
    cerr << "{";
    _print(p.first);
    cerr << ", ";
    _print(p.second);
    cerr << "}";
}

// ================= VECTOR =================
template <class T>
void _print(const vector<T> &v) {
    cerr << "[ ";
    for (const auto &i : v) {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

// ================= SET =================
template <class T>
void _print(const set<T> &s) {
    cerr << "{ ";
    for (const auto &i : s) {
        _print(i);
        cerr << " ";
    }
    cerr << "}";
}

// ================= MAP =================
template <class K, class V>
void _print(const map<K, V> &m) {
    cerr << "{ ";
    for (const auto &i : m) {
        _print(i);
        cerr << " ";
    }
    cerr << "}";
}

// ================= UNORDERED MAP =================
template <class K, class V>
void _print(const unordered_map<K, V> &m) {
    cerr << "{ ";
    for (const auto &i : m) {
        _print(i);
        cerr << " ";
    }
    cerr << "}";
}

// ================= ARRAY =================
template <class T>
void _print(const T arr[], int n) {
    cerr << "[ ";
    for (int i = 0; i < n; i++) {
        _print(arr[i]);
        cerr << " ";
    }
    cerr << "]";
}

// ================= DEBUG MACRO =================
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = ", _print(x), cerr << endl;
#define debug2(x, y) cerr << #x << " = ", _print(x), cerr << ", " \
                          << #y << " = ", _print(y), cerr << endl;
#else
#define debug(x)
#define debug2(x, y)
#endif

#endif