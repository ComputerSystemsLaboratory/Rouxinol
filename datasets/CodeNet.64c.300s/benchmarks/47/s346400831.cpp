#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,a[101]={0},k=0;
  while(cin>>n){
    a[n]++;
    k=max(a[n],k);
  }
  for(int i=1;i<101;i++)if(a[i]==k)cout<<i<<endl;
}