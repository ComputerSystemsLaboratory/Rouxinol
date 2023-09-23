
#include <iostream>
using namespace std;

int main(){
  int n;
  int a[31]={};
  a[0]=1; a[1]=1; a[2]=2;
  for(int i=3;i<=30;i++) a[i]=a[i-3]+a[i-2]+a[i-1];
  
  while(cin >> n && n>0){
    cout << ((a[n]+9)/10+364)/365 << endl;
  }
}