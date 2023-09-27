#include <iostream>

using namespace std;

void check(int i){
  int t=i;
  while(t!=0){
    if(t%10==3){
      cout << " " <<i;
      return;
    }
    t/=10;
  }
}

void call(int n){
  for(int i=1;i<=n;i++){
    if(i%3==0) cout << " " << i;
    else check(i);
  }
}

int main(){
  int x;
  cin >> x;
  call(x);
  cout << '\n';
}