#include<string>
#include<cstdio>
#include<cctype>
#include<iostream>
#include <algorithm>
#include<cmath>
#include<queue>
using namespace std;

int main(){
    int m,o,ans;
    while(1){
    o=0;
    ans=0;
    cin >> m;
    if(m==0)break;
    o=1000-m;
    if(o>500){
        o-=500;
        ans++;
    }
    if(o / 100 > 0){
        ans+=o/100;
        o%=100;
    }
    if(o>50){
        o-=50;
        ans++;
    }
    if(o / 10 > 0){
    ans+=o/10;
    o%=10;
    }
    if(o>4){
        ans++;
        o-=5;
    }
    ans+=o;
    cout <<ans<<endl;
    }
    return 0;
}