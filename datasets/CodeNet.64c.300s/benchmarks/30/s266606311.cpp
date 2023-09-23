#include<iostream>
using namespace std;

int coin[] = { 500, 100, 50, 10, 5, 1 };
int main() {
  int n,res;
  while(true) {
    cin>>n;
    if(!n) break;
    n=1000-n,res=0;
    for(int i=0; i<6; i++) {
      res+=n/coin[i];
      n%=coin[i];
    }
    cout<<res<<endl;
  }
}