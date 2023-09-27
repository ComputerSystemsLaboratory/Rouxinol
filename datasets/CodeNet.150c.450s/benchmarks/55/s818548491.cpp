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
    while(1){
        string num;
        int sum = 0;
        getline(cin, num);
        if(num == "0")
            break;
        REP(i, num.size()){
            sum += (num[i] - '0');
        }
        os << sum << endl;
    }
    cout << os.str();
    return 0;
}