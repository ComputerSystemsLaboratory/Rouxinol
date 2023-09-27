#include<iostream>
using namespace std;
int main(){
  int n;
  cin >>n;
  while(n--){
    double a[2],b[2],c[2],d[2];
    cin >>a[0]>>a[1]>>b[0]>>b[1]>>c[0]>>c[1]>>d[0]>>d[1];
    b[0]-=a[0];
    b[1]-=a[1];
    d[0]-=c[0];
    d[1]-=c[1];
    if(b[0]*d[1] == b[1]*d[0]){cout <<"YES"<<endl;}
    else{cout <<"NO"<<endl;}
  }
  return 0;
}
 