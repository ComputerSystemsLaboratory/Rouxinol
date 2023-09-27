#include <bits/stdc++.h>
using namespace std;
vector<string>v;
vector<string>ansl;
string s;
int ary[100005] = {0};
int main(){
  int N,M,flag = 0;
  string opn = "Opened by ",cls = "Closed by ",unk = "Unknown ";

  cin >>N;
  for (int i = 0;i<N;i++){
    cin >>s;
    v.push_back(s);
  }


  cin >>M;
  for(int i = 0;i<M;i++){
    cin >>s;
    int now_flg = flag;
    for(int j = 0;j<N;j++){
      if(s == v[j]){
        if(flag){
          flag = 0;
          ansl.push_back(cls + s);
        }else{
          flag = 1;
          ansl.push_back(opn + s);
        }
      }
    }
    if(now_flg == flag){
      ansl.push_back(unk + s);
    }
  }

  for(int i = 0;i<M;i++){
    cout <<ansl[i]<<endl;
  }
  return 0;
}

