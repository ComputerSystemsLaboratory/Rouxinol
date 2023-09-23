#include<iostream>
using namespace std;
#define N 1001
int ans[N];
int sum[N];
int sumn(int n){
  return (n*(n-1))/2;
}
int sumsub(int s, int e){
  return sum[e] - sum[s];
}
int main(){
  for(int i = 0; i < N; ++i){
    sum[i] = sumn( i );
  }
  for(int i = 1; i < N; ++i){
    for(int j = i+2; j < N; ++j){
      if(sumsub(i,j)<1||sumsub(i,j)>=N)continue;
      ans[ sumsub(i,j) ]++;
    }
  }
  while(true){
    int q;
    cin >> q;
    if(q==0)break;
    cout << ans[q] << endl;
  }
  return 0;
}