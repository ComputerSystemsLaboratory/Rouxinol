#include <bits/stdc++.h>
using namespace std;
#include <iostream>
/*cout <<"Debug"
cout <<x-30<<' '<<y-30<<endl;
typedef pair<pair<int ,int>, int> P;
vector<pair<pair<int ,int>, int> > v_ans;
vector<int>v_;
vector<long int>v_ansl;
/*taro tenn,hanako_ten,sum*/
/*
bool cmp(P h, P r){
  return h.second < r.second;
}
*/
int v[101];
int main(){
  int N,M;
  int P;

  while(cin >>N>>M>>P){
    if (N == 0 && M == 0 && P == 0) break;
    int NUMP = 0;
    int ans = 0;
    for(int i = 0;i < N ; i++){
      cin >>v[i];
      NUMP += v[i];
    }
    if(v[M-1] == 0){
      ans = 0;
      cout <<ans<<endl;
    }
    else{
    cout <<100*NUMP*(100-P)/(100*v[M-1])<<endl;
  }
  }
  return 0;
}

