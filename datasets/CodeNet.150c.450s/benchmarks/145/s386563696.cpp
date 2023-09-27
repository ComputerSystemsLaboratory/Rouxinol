#include <iostream>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <map>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,b) FOR(i,0,b)
#define PB push_back
#define MP make_pair
typedef pair<double,double> P;
int main(){
  map<string,int> data;
  string s;
  int cnt=0,t=0,m=0;
  string ans[2];
  while(cin>>s){
    data[s]++;
    if(data[s]>t){
      t=data[s];
      ans[0]=s;
    }
    if(s.size()>m){
      m=s.size();
      ans[1]=s;
    }
  }
  cout<<ans[0]<<" "<<ans[1]<<endl;
}