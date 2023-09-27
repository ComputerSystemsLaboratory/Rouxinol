#include<bits/stdc++.h>
#define loop(i, a, b) for(int i = a; i < b; i++) 
#define rep(i, a) loop(i, 0, a)
using namespace std;
const int MOD = 1000000007;
const int inf = 1e8;
using vi = vector <int>;
using vvi = vector <vi>;
using vc = vector <char>;
using vvc = vector <vc>;
using vs = vector <string>;
using vvs = vector <vs>;
//g++ -std==c++14
//setprecision(10)
string str;

int main(){
    while(cin >> str){
        reverse(str.begin(), str.end());
        cout << str << endl;
    }
}