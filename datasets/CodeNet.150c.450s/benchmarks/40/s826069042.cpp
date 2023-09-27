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
    void north(){
        roll(1, 4);}
    void south(){
        roll(4, 1);}
    void east(){
        roll(3, 2);}
    void west(){
        roll(2, 3);}
    void dir(char a){
        if (a == 'N') north();
        if (a == 'S') south();
        if (a == 'E') east();
        if (a == 'W') west();}
};

int main(){
    dice d;
    REP(i, 6) cin >> d.l[i];
    string s;
    cin >> s;
    REP(i,s.size()) d.dir((char)s[i]);
    cout << d.l[0] << endl;
}