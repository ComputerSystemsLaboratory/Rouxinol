#include<cstdio>
#include<iostream>

using namespace std;

int main(){

  while(1){
    int n,cnt=0,sum=0;
    cin >> n;
    if(n==0) break;
    for(int i=1;i<n;i++){
      for(int j=i;j<n;j++){
	sum+=j;
	if(sum > n) break;
	if(sum==n){
	  cnt++;
	  break;
	}
      }
      sum=0;
    }
    cout << cnt << endl;
  }
  return 0;
}