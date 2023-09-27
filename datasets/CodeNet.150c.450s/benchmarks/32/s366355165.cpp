#include<bits/stdc++.h>
using namespace std;

int m,a,b;
int p[205];

int main(){
  while(1){
    cin>>m>>a>>b;
    if(m==0&&a==0&&b==0)break;
    for(int i=1;i<=m;i++){
      cin>>p[i];
    }
    int maxm=0,id;
    for(int i=a;i<=b;i++){
      if(maxm<=p[i]-p[i+1]){
        maxm=p[i]-p[i+1];
        id=i;
      }
    }
    cout<<id<<endl;
  }
  return 0;
}