#include <bits/stdc++.h>
using namespace std;
int main(){
  int s,n,m,p[12]={31,29,31,30,31,30,31,31,30,31,30,31},i;
  while(cin>>n>>m,n){
    for(s=i=0;i<n-1;i++)s+=p[i];
      s+=m;
    if(s%7==0)cout<<"Wednesday"<<endl;
    else if(s%7==1)cout<<"Thursday"<<endl;
    else if(s%7==2)cout<<"Friday"<<endl;
    else if(s%7==3)cout<<"Saturday"<<endl;
    else if(s%7==4)cout<<"Sunday"<<endl;
    else if(s%7==5)cout<<"Monday"<<endl;
    else cout<<"Tuesday"<<endl;
  }
}