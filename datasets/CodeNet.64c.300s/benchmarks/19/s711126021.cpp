#define MINUS -99999999
#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
  int n,a[5010],j;
  long long int  sum[5010] = {0},max;
  while(1){
    max = MINUS;
    cin >> n;
    if(n == 0)break;
    for(int i = 1; i <= n; i++){
      cin >> a[i];
      sum[i] = sum[i-1] + a[i];
    }
    for(int i = 0; i < n; i++){
      for(int j = i + 1; j <= n; j++){
	if(max < sum[j] - sum[i]){
	  max = sum[j] - sum[i];
	} 
      }
    }
    printf("%lld\n",max);
  }
}