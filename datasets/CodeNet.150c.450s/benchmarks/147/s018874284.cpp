#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[10005]={};
  for(int i=1;i<=100;i++){
    for(int j=1;j<=100;j++){
       for(int k=1;k<=100;k++){
         int l=pow(i,2)+pow(j,2)+pow(k,2)+i*j+j*k+k*i;
         if(l<10001) a[l]++;
       }
    }
  }
  for(int i=1;i<=n;i++) cout<<a[i]<<endl;
  return 0;
}
