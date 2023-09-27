#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
using namespace std;

struct dice{
    int l1, l2, l3, l4, l5, l6;
    void north(){
        int tmp = l1;
        l1 = l2;
        l2 = l6;
        l6 = l5;
        l5 = tmp;}
    void south(){
        int tmp = l1;
        l1 = l5;
        l5 = l6;
        l6 = l2;
        l2 = tmp;}
    void east(){
        int tmp = l1;
        l1 = l4;
        l4 = l6;
        l6 = l3;
        l3 = tmp;}
    void west(){
        int tmp = l1;
        l1 = l3;
        l3 = l6;
        l6 = l4;
        l4 = tmp;}
    void roll(char a){
        if (a == 'N') north();
        if (a == 'S') south();
        if (a == 'E') east();
        if (a == 'W') west();}
};

int main(){
    dice d;
    cin >> d.l1 >> d.l2 >> d.l3 >> d.l4 >> d.l5 >> d.l6;
    string s;
    cin >> s;
    REP(i,s.size()) d.roll((char)s[i]);
    cout << d.l1 << endl;
}