#include<bits/stdc++.h>
using namespace std;
int n,m;
int gcd(int a,int b){
    return b?gcd(b,a%b):a;
}
int main()
{
    while(cin>>n>>m){
        int d=gcd(n,m);
        int lcm=n/d*m;
        cout<<d<<" "<<lcm<<endl;
    }
    return 0;
}

