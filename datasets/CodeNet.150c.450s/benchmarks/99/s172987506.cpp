#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <numeric>
#include <string>
#include <string.h>
#include <map>
#include <set>
#include <functional>
#include <complex>

using namespace std;

const int INF = (1<<30) - 1;

map<char, int> table = {
    {'m', 1000},
    {'c', 100},
    {'x', 10},
    {'i', 1}
};

int to_int(string s){
    int i = 0;
    int sum = 0;
    while(i<s.length()){
        int d = 1;
        if('0'<=s[i] && s[i]<='9'){
            d = s[i]-'0';
            i++;
        }
        sum += d*table[s[i++]];
    }
    return sum;
}

string to_mcxi(int a){
    string s = "mcxi";
    string res = "";
    for(char c: s){
        int d = a / table[c];
        a -= d * table[c];
        if(1<d)
            res += d+'0';
        if(0<d)
            res += c;
    }
    return res;
}

int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    
    int T;
    cin >> T;
    while(T--){
        string a, b;
        cin >> a >> b;
        cout << to_mcxi(to_int(a)+to_int(b)) << endl;
    }
    return 0;
}