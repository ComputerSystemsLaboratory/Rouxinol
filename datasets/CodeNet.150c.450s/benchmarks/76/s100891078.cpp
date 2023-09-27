#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
typedef long long lli;
typedef vector<lli> vll;
typedef vector<bool> vbl;
typedef vector<vector<lli> > mat;
typedef vector<vector<bool> > matb;
typedef vector<string> vst;
typedef pair<lli,lli> pll;
typedef pair<double,double> pdd;

lli n;

mat t;
vll v;
lli c;
string s;
lli x;

void insert(lli x,lli i){
    if(x < v[i]){
        if(t[i][0] >= 0) insert(x,t[i][0]);
        else t[i][0] = c;
    }else{
        if(t[i][1] >= 0) insert(x,t[i][1]);
        else t[i][1] = c;
    }
}
bool find(lli x,lli i){
    if(x == v[i]) return true;
    if(x < v[i]){
        if(t[i][0] >= 0) return find(x,t[i][0]);
        else return false;
    }else{
        if(t[i][1] >= 0) return find(x,t[i][1]);
        else return false;
    }
}

void inorder(lli i){
    if(t[i][0] >= 0) inorder(t[i][0]);
    cout << " " << v[i];
    if(t[i][1] >= 0) inorder(t[i][1]);
}

void preorder(lli i){
    cout << " " << v[i];
    if(t[i][0] >= 0) preorder(t[i][0]);
    if(t[i][1] >= 0) preorder(t[i][1]);
}

int main(){
    cin >> n;
    t = mat(n,vll(2,-1));
    v = vll(n);
    for(lli i = 0;i < n;i++){
        cin >> s;
        if(s == "insert"){
            cin >> x;
            v[c] = x;
            if(i) insert(x,0);
            c++;
        }else if(s == "print"){
            inorder(0);cout << endl;
            preorder(0);cout << endl;
        }else if(s == "find"){
            cin >> x;
            cout << (find(x,0) ? "yes" : "no") << endl;
        }
    }

    return 0;
}