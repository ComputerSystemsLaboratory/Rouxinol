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
double a, b, c, d, e, f;

int main(){
    while(cin >> a >> b >> c >> d >> e >> f){
        double y = (a * f - c * d) / (a * e - b * d);
        double x = (c - b * y) / a;
        cout << fixed << setprecision(3) << x << " " << y << endl;
    }
}