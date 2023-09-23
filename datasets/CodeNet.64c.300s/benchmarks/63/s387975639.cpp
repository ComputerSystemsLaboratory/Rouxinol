#include <cstdio>
#include <cstring>
#include <queue>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define LL long long
const int N = 50005;
LL x,y;
LL gcd(LL a, LL b){
    return (b==0?a:gcd(b,a%b));
}
void init(){
}
void solve(){
}
int main(){
    while(cin>>x>>y){
        LL g = gcd(x,y);
        cout<<g<<" "<<x/g*y<<endl;
    }
    return 0;
}