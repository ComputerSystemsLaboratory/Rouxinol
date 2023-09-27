#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
using namespace std;
//型定義などミスると、死ぬほどエラー出ることがわかった
bool compare_dp(const pair<int,int> x,const pair<int,int> y){
  return x.first > y.first;
}

int count_attacking(int N,int M){
  int D,P;
  vector<pair<int,int>> dp;
  
  for(int i=0;i<N;i++){
    cin >> D >> P;
    dp.push_back(make_pair(P,D));
  }
  sort(dp.begin(),dp.end(),compare_dp);
  vector<pair<int,int>>::iterator i;
  for(i=dp.begin();i<dp.end();i++){
    if(M-(*i).second>=0){
      M-=(*i).second;
    }else{
      (*i).second-=M;
      break;
    }
  }
  int C=0;
  for(;i<dp.end();i++){
    C+=((*i).first)*((*i).second);
  }
  return C;
}

int main(){
  int n,m;
  vector<int> c;
  while(cin >> n >> m && n!=0){
    c.push_back(count_attacking(n,m));
  }
  for(auto i=c.begin();i<c.end();i++){
    cout << *i << endl;
  }
}

