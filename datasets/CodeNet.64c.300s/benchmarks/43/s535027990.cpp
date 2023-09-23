#include<iostream>
using namespace std;

int main(){
  int a[4],b[4];
  int n=0;
  while(cin>>a[n]){
    n++;
    if(n==4)break;
  }

  n=0;

  while(cin>>b[n]){
      n++;
if(n==4)break;
    }
 int  A=a[0]+a[1]+a[2]+a[3];
 int  B=b[0]+b[1]+b[2]+b[3];
  if(A>B){
    cout << A << endl;
  }
if(A<B){
    cout << B << endl;
  }     
 if(A==B){
    cout << A << endl;
  }
    return 0;
}