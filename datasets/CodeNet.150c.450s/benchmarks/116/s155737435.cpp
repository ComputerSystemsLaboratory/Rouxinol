#include<iostream>
#include<vector>

using namespace std;

#define rep(i,a) for(int i = 0 ; i < a ; i ++)

int main(void){
  int n,k;
  while(cin>>n>>k,n+k){
    vector<int> a(n);

    rep(i,n)cin>>a[i];
    int ret = -100000;
    int sum = 0;
    rep(i,k)sum += a[i];
    for(int i = k ; i < n ; i ++){
      sum = sum + a[i] - a[i-k];
      ret = max(ret,sum);
    }
    cout<<ret<<endl;
  }
}