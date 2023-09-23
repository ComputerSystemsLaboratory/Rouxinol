#include<iostream>
using namespace std;
int main(){
  int log[5001] = {0};
  int n;
  while(cin >>n,n){
    int ans = -9999999;
    for(int i=0; i<n; i++){
      cin >>log[i+1];
      log[i+1]+=log[i];
    }
    for(int i=0; i<=n; i++){
      for(int j=i+1; j<=n; j++){
	if(ans < log[j]-log[i]){ans = log[j]-log[i];}
      }
    }
    cout <<ans<<endl;
  }
  return 0;
}