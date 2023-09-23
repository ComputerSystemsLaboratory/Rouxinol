#include<iostream>
using namespace std;
int main(){
  int n;
  int max=0;
  int a[111]={0};
  while(cin>>n){
    a[n]=a[n]+1;
    if(a[n]>max) max=a[n];
  }
  for(int i=1;i<101;i++){
    if(max==a[i]) cout<<i<<endl;
  }
}
 