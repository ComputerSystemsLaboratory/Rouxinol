#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
int main() {
    int n,m,t,h,p,q,tmp,x;
    int a[102];
    int b[102];
    while(cin>>n>>m&&n!=0){t=0;h=0;
        for(int i=0;i<n;i++){
            cin>>a[i];t+=a[i];}
        for(int i=0;i<m;i++)
        {        cin>>b[i];h+=b[i];}
        x=t-h;tmp=200000;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((a[i]-b[j])*2==x){
                    if(a[i]<tmp){tmp=a[i];
                        p=a[i];q=b[j];}
                }
            }
        }
        if(tmp!=200000)cout<<p<<" "<<q<<endl;
        else cout<<-1<<endl;}
    }