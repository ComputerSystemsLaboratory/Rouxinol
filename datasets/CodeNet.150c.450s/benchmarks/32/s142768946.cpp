#include <bits/stdc++.h>
using namespace std;
int m;
vector<int>p;
vector<int>s;
int maxn,minn;


int main(){
  int i,j,now=0,ni=0;
  while(1){
  cin >> m >> minn >> maxn;
  now = 0;
  if(m==0&&maxn==0&&minn==0)break;
  for(i=0;i<m;i++){
    cin >> j;
    p.push_back(j);
  }
  sort(p.begin(),p.end());
  for(i=0;i<m-1;i++)  s.push_back(p[i+1]-p[i]);
  for(i=m-minn-1;i>=m-maxn-1;i--){
    // cout << " bbb"<<s[i];
    if(s[i]>=now){
      now = s[i];
      ni = i;
      //cout <<"aaa"<< now << " "<< ni << endl;
    }
  }
  //cout <<endl<< ni << endl;
  cout << m-1-ni << endl;
  while(p.size())p.pop_back();
  while(s.size())s.pop_back();
  }
  return 0;
}

