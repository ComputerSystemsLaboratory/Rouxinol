#include<iostream>
using namespace std;

int main(){

  int n, ans=0, cnt=0;

  while(cin >> n && n){
    for(int i=1; i<n; i++){
      for(int j=0; j<n-i; j++){
        ans+=i+j;
        if(n==ans){
          cnt++;
        }
      }
      ans = 0;
    }
    cout << cnt << endl;
    cnt = 0;
  }

  return 0;
}