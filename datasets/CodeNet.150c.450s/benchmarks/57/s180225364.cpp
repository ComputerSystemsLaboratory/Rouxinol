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
    int x, y;
    ostringstream os;
    while(1) {
        string op;
        cin >> x >> op >> y;
        if(op == "?")
            break;
        if(op == "+")
            os << x + y << endl;
        if(op == "-")
            os << x - y << endl;
        if(op == "*")
            os << x * y << endl;
        if(op == "/")
            os << x / y << endl;
    }
    cout << os.str();
}