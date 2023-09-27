#include <iostream>
#include <vector>
#include <algorithm>
#define inf 1<<30
using namespace std;

int b_search(vector<int> &dp,int k){
  int a=0;
  int b=dp.size();
  while(a+1<b){
    int m=(a+b)/2;
    if(k>dp.at(m)){
      a=m;
    }else if(k<=dp.at(m)){
      b=m;
    }
  }
  return a;
}

int main(){
  int N;
  cin >> N;
  vector<int> a(N),dp(N+2,inf);
  dp.at(0)=-1;
  for(int i=0;i<N;i++) cin >> a.at(i);
  for(int i=0;i<N;i++){
    int n=b_search(dp,a.at(i));
    dp.at(n+1)=a.at(i);
  }
  int ans;
  for(int i=0;i<N+2;i++){
    if(dp.at(i)==inf){
      ans=i-1;
      break;
    }
  }
  /*
  for(int i=0;i<N;i++){
    cout << a.at(i) << " ";
  }
  cout << endl;
  for(int i=0;i<N+2;i++){
    cout << dp.at(i) << " ";
  }
  cout << endl;
  */
  cout << ans << endl;
}
