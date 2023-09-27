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
    string str;
    getline(cin, str);

    REP(i, str.size()){
        if(0x40 < str[i]  && str[i] < 0x5B)
            str[i] += 0x20;
        else if(0x60 < str[i] && str[i] < 0x7B)
            str[i] -= 0x20;
    }

    cout << str << endl;
    return 0;
}