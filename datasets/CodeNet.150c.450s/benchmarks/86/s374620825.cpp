#include<bits/stdc++.h>
using namespace std;
int main(){
  while(1){
    int n,m,p;
    cin>>n>>m>>p;
    if(n==0){
      break;
    }
    m--;
    vector<int> x(n);
    int sum=0;
    for(int i=0;i<n;i++){
      cin>>x[i];
      sum+=x[i];
    }
    sum*=100;
    double temp=(double)sum;
    temp-=temp*((double)p/100.0);
    if(x[m]==0){
      cout<<0<<endl;
      continue;
    }
    cout<<(int)temp/x[m]<<endl;
  }
  return 0;
}
