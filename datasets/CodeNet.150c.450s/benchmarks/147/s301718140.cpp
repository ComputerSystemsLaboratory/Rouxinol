#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
  
  double n;
  cin>>n;
  vector<int> cou(10001);

   for(int i=1;i<=101;++i){
    for(int j=1;j<=101;++j){ 
      for(int k=1;k<=101;++k){
        int mo=i*i+j*j+k*k+i*j+i*k+j*k;
        if(mo<10001)
          ++cou[mo];
      }
    }
  }
  for(int i=1;i<=n;++i){
    cout <<cou[i]<<endl;
  }
}