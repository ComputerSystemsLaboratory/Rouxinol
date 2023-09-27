#include<iostream>
using namespace std;
int p;
void cou(int,int);
int main(){
  int n;
  while(1){
    p=0;
    cin >> n;
    if(n==0)break;
    for(int i=1;i<n;i++){
      cou(n,i);
    }
    cout << p << endl;
  }
  return 0;
}
void cou(int n,int r){
  int t=0;
  for(int i=r;i<n;i++){
    t+=i;
    if(t==n){
      p++;
      return;
    }
    if(t>n)return;
  }
}