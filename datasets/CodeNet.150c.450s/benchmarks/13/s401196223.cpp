#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

#define ll         long long
#define PI         acos(-1.0)
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)

int main(){
    string s, p;
    getline(cin, s);
    getline(cin, p);
    s = s + s;
    FOR(i, 0, s.length()){
        int len = 0;
        FOR(k, 0, p.length()) if(p[k]==s[i+k]) len++;
        if(len==p.length()){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}