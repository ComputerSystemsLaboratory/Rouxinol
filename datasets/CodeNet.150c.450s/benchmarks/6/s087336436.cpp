#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <math.h>
#include <iomanip>
#include <bitset>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <utility>
#include <set>
#include <map>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef pair<ll,ll> pairs;

#define MOD 998244353


ll gcd(ll a,ll b){
    if (a%b==0)return(b);
    else return(gcd(b,a%b));
}

bool primeNumber(ll n){
    if(n < 2) return false;
    else{
        for(ll i = 2; i * i <= n; i++){
            if(n % i == 0) return false;
        }
        return true;
    }
}


int main(){
    ll a,b,c; cin>>a>>b>>c;
    if(a<b && b<c)puts("Yes");
    else puts("No");
    return 0;
}
 
    
    

