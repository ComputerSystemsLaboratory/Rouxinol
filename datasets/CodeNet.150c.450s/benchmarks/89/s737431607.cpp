#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
bool pr[MAX];
void era(){
    for(int i=0;i<MAX;i++) pr[i]=true;
    pr[0]=false;
    pr[1]=false;
      
    for(int i=0;i*i<MAX;i++){
        if(pr[i]){
            for(int j=i*i;j<=MAX;j=j+i){
                pr[j]=false;
            }
        }
    }
}

void solve(int a,int d,int n){
    int count=0;
    for(int i=a;1;i+=d){
        if(pr[i])count++;
        if(count==n){cout<<i<<endl;return;}
    }
    
    
}

int main (){
    era();
    int a,b,c;
    while(cin>>a>>b>>c,a){
        solve(a,b,c);
    }
}