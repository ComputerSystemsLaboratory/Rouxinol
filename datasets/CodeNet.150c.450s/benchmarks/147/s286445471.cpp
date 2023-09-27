#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
           int n;
           cin >>n;

    vector<int> vec(10005,0);
  int v=0;
  for(int i=1;i<=sqrt(n);i++){
  for(int j=1;j<=sqrt(n);j++){
  for(int k=1;k<=sqrt(n);k++){
    
v=j*(i+j+k)+k*(i+k)+i*i;
    if(v<=10000){vec[v]++;}
  
  }
  }
  }
 for(int i=1;i<=n;i++)cout<<vec[i]<<endl;



}