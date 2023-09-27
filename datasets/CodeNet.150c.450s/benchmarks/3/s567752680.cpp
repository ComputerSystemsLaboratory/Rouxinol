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
    string s;
    cin >> s;
    int n;
    cin >> n;
    FOR(i, 0, n){
        string order, rep;
        int a, b;
        cin >> order >> a >> b;
        if(order=="replace"){
            cin >> rep;
            s.replace(a, b-a+1, rep);
        }
        if(order=="reverse"){
            reverse(s.begin()+a, s.begin()+b+1);
        }
        if(order=="print"){
            cout << s.substr(a, b - a + 1) << endl;
        }
    }
}