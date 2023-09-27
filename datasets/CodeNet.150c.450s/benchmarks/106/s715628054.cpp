#include<iostream>
using namespace std;

int main(){
  int a,b,c,i,ans=0;
  cin >> a >> b >> c;
  for(i=a;i<=b;i++){
    if(c%i==0){
      ans++;
    }
  }
  cout << ans << '\n';
  return 0;
}

