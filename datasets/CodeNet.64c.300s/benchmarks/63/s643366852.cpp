#include<bits/stdc++.h>
#define int long long
using namespace std;
 
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
    }
signed main(){
 int a,b;
 while(cin>>a>>b){
     int c=gcd(a,b);
     printf("%lld %lld\n",c,a*b/c);
     }
}