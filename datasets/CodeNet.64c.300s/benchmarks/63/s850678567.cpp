#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <cstring>
using namespace std;
typedef long long int ll;
const int INF = 1000000000;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b){
    // a >= b
    for(ll i = a; i <= (b * a); i += a){
        if(i % b == 0) return i;
    }
}
int main(){
    for(ll a, b; cin >> a >> b;){
        cout << gcd(a, b) << " ";
        if(a > b){
            cout << lcm(a, b) << endl;
        }else{
            cout << lcm(b, a) << endl;
        }
    }
    return 0;
}