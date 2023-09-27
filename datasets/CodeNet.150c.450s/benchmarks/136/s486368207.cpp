
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <math.h>
#include <utility>
#include <set>
#include <map>
#define INF 100000
using namespace std;
typedef long long int ll;

ll gcd(ll n, ll m){
    if(n%m>0){
        return gcd(m,n%m);
    }else{
        return m;
    }
}

int main(){
    ll a,b;
    while (cin >> a ,cin >> b) {
        ll g = gcd(max(a,b),min(a,b));
        ll l = a*b/g;
        cout <<g<<" "<<l<<endl;
    }
}