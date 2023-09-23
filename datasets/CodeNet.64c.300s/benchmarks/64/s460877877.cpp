#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int a,b,cnt=1;
    cin>>a>>b;
    if(a<b) swap(a,b);
    while(1) {
        if(cnt==0 || b==0) break;
        cnt=a%b;
        a=b;b=cnt;
    }
    cout<<a<<'\n';

    return 0;
}