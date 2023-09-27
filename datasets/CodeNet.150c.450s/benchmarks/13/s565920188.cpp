#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <ctype.h>
#include <algorithm>
#include <cmath>
#include <vector>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
#define square(x) (x) * (x)

const int INF = 1e9;

using namespace std;

int main() {
    string s, p;
    cin >> s >> p;
    s.append(s);
    if(s.find(p) != string::npos)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}