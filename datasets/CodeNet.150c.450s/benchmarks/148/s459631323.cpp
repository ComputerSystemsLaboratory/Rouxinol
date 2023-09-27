#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <stdlib.h>
using namespace std;

#define INF 1e9
#define PI 3.141592653589793238
typedef long long ll;

int main() {
    ll n; cin>>n;
    string s;
    int c0=0, c1=0, c2=0, c3=0;
    for(int i=0; i<n; i++){
        cin>>s;
        if(s=="AC")c0++;
        else if(s=="WA")c1++;
        else if(s=="TLE")c2++;
        else if(s=="RE")c3++;
    }
    cout<<"AC x "<<c0<<endl;
    cout<<"WA x "<<c1<<endl;
    cout<<"TLE x "<<c2<<endl;
    cout<<"RE x "<<c3<<endl;


    return 0;
}