#include<iostream>
#include<vector>

using namespace std;

int main(void){

  int n,m,p;

  while(cin >> n >> m >> p,n|m|p){
    vector<int>cnt(n);
    int sum = 0;
    for(int i=0;i<n;i++){
      cin >> cnt[i];
      sum += cnt[i];
    }
    sum *= 100;
    int ans = sum - sum * p / 100;
    if(cnt[m-1]==0)cout << 0 << endl;
    else cout << ans / cnt[m-1] << endl;
  }
  
  return 0;
}