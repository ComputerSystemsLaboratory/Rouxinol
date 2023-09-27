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
    string str;
    int q;
    cin >> str >> q;
    REP(i, q){
        string order;
        int fr, to;
        cin >> order >> fr >> to;
        if(order == "replace"){
            string newstr;
            cin >> newstr;
            str.replace(fr, to-fr+1, newstr);
        }
        else if (order == "reverse"){
            string temp = str.substr(fr, to-fr+1);
            REP(j, to-fr+1){
                str[to-j] = temp[j];
            }
        }
        else if (order == "print")
            os << str.substr(fr, to-fr+1) << endl;
    }
    cout << os.str();
    return 0;
}