#include <bits/stdc++.h>
using namespace std;
int main(){
  int s,n,m,p[12]={31,29,31,30,31,30,31,31,30,31,30,31},i;
  string d[] = {"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
  while(cin>>n>>m,n){
    for(s=i=0;i<n-1;i++)s+=p[i];
      cout<<d[(s+m)%7]<<endl;
  }
}