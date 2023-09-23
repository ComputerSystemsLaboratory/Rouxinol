#include<iostream>
using namespace std;

int main(){
  int n,i;
long long ans;

  while(cin >> n){

  ans=1;
  for(i=0;i<n;i++){
    ans=ans*(n-i);

  }
 
    cout << ans << endl;
  }

}