#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
using namespace std;

struct dice{
    int l[6];
    void roll(int a, int b){
        int t = l[0];
        l[0] = l[a];
        l[a] = l[5];
        l[5] = l[b];
        l[b] = t;}
    void dir(char a){
        if (a == 'N') roll(1, 4);
        if (a == 'S') roll(4, 1);
        if (a == 'E') roll(3, 2);
        if (a == 'W') roll(2, 3);}
};

int main(){
    dice d;
    REP(i, 6) cin >> d.l[i];
    string s;
    cin >> s;
    REP(i,s.size()) d.dir((char)s[i]);
    cout << d.l[0] << endl;
}