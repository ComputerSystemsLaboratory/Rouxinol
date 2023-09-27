#include <bits/stdc++.h>
using namespace std;
vector<string>v;
vector<int>ansl;
string s;
int ary[100005] = {0};
int main(){
  int N,flgL = 0,flgR = 0, prc = 0;
  string lu = "lu",ru = "ru", ld = "ld",rd = "rd";

  cin >>N;

  while(N != 0){
    int cnt = 0;
    flgL = 0,flgR = 0, prc = 0;

    for(int i = 0;i<N;i++){
      string foot;
      int nwp = prc;

      cin >>foot;
      if(foot == "lu")flgL = 1;
      if(foot == "ru")flgR = 1;
      if(foot == "ld")flgL = 0;
      if(foot == "rd")flgR = 0;

      if((flgL == 1)&&(flgR == 1))prc = 1;
      if((flgL == 0)&&(flgR == 0))prc = 0;

      if(nwp != prc)cnt++;
    }
    ansl.push_back(cnt);

    cin >>N;
  }

  for(int i = 0;i<(int)ansl.size();i++){
    cout <<ansl[i]<<endl;
  }
  return 0;
}

