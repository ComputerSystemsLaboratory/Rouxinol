#include <bits/stdc++.h>
using namespace std;
vector <char> v;
vector<int>ans;
string s;

int main(){
  int N;
  int d_n = 5*20+19*5, d_ur = 200;

  cin >>N;

  for (int i = 0;i<N;i++){
    int y,m,d;
    int Num = 0;

    cin >>y>>m>>d;
    if(y%3 == 0){
      Num += d_ur-20*(m-1)-d+1;
    }else{
      Num += d_n-d-39*((m-1)/2)-20*((m-1)%2)+1;
    }

    for(int j = y+1;j<=999;j++){
      if(j%3 == 0){
        Num += d_ur;
      }else{
        Num += d_n;
      }
    }
    ans.push_back(Num);
  }

  for (int i = 0;i<(int)ans.size();i++){
    cout <<ans[i]<<endl;
  }

  return 0;
}

