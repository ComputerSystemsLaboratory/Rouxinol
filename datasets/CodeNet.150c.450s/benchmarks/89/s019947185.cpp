#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,d,n,cnt;
  int arr[1000001];
  const int N = 1000000; //N までの素数を表示
  for(int i = 2; i < N; i++){
    arr[i] = 1;
  }
  for(int i = 2; i < sqrt(N); i++){
    if(arr[i]){
      for(int j = 0; i * (j + 2) < N; j++){
	arr[i *(j + 2)] = 0;
      }
    }
  }
  while(cin>>a>>d>>n&&(a||d||n)){
    cnt = 0;
    for(int i = a; i < N; i+=d){
      
      if(arr[i]){
	cnt++;
	if(cnt==n){
	  printf("%d\n",i);
	  break;
	}
      }
    }
  }
}