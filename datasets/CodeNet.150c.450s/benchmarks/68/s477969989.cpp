#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
  int n;
  while(cin >> n,n){
    int a[n];
    for(int i=0; i<n; ++i){
      cin >> a[i];
    }
    int ans = 1000000;
    for(int i=0; i<n; ++i){
      for(int j=i+1; j<n; ++j){
        if(abs(a[i]-a[j]) < ans){
          ans = abs(a[i]-a[j]);
        }
      }
    }
    cout << ans << endl;
  }
}

