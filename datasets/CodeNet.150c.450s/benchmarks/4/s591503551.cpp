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
    ostringstream os;
    while(1) {
        int m, f, r;
        cin >> m >> f >> r;
        if (m == -1){
            if(f == -1 && r == -1)
                break;
            os << "F" << endl;
            continue;
        }
        if (f == -1){
            os << "F" << endl;
            continue;
        }
        if(m + f >= 80)
            os << "A" << endl;
        else if (m + f >= 65)
            os << "B" << endl;
        else if (m + f >= 50)
            os << "C" << endl;
        else if (m + f >= 30)
            os << ((r < 50) ? "D" : "C") << endl;
        else
            os << "F" << endl;
    }

    cout << os.str();
    return 0;
}