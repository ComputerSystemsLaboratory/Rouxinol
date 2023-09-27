#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int n;
  while(scanf("%d",&n)!= EOF){
    int ans  = 0;
    for(int i = 0;i<=9;i++){
      for(int j= 0;j<=9;j++){
	for(int k = 0;k<=9;k++){
	  for(int l = 0;l<=9;l++){
	    if(i+j+k+l == n)ans++;
	  }
	}
      }
    }
    cout << ans << endl;
  }
}