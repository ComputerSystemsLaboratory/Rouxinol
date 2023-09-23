#include<bits/stdc++.h>
using namespace std;

int cnt[100];
int main(){
    int n,ma=0;

    while(cin>>n)ma=max(ma,++cnt[--n]);

    for(int i=0;i<100;i++)
        if(cnt[i]==ma)cout<<i+1<<endl;

   return 0;
}