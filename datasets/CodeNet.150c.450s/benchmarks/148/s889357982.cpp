#include<iostream>
//#include <cmath>
#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
#define FOR(i,a,n) for(int i=(a);i<(n);++i)
#define ROF(i,a,n) for(int i=(a);i>(n);--i)

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
   // freopen("input.txt","r",stdin);
    //reopen("output.txt","w",stdout);
    int n;cin>>n;
    int ac=0, wa=0,tle=0,re=0;
    FOR(i,0,n){
        string s;cin>>s;
        if(s=="AC")ac++;
        else if(s=="WA")wa++;
        else if(s=="TLE")tle++;
        else re++;
    }
    cout<<"AC x "<<ac<<"\n";
    cout<<"WA x "<<wa<<"\n";
    cout<<"TLE x "<<tle<<"\n";
    cout<<"RE x "<<re<<"\n";
}