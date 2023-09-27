#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<algorithm>
#include<map>
#include<cassert>
#include<queue>
#define F first
#define S second
#define REP(i,s,n) for(int i=s;i<n;i++)
#define rep(i,n) REP(i,0,n)

using namespace std;


int main(){
  int N,M;
  string s;
  map<string,bool> Lock;

  cin >> N;
  rep(i,N){
    cin >> s;
    Lock[s] = true;
  }
  cin >> M;
  bool state = false;
  rep(i,M){
    cin >> s;
    if(!Lock[s])cout << "Unknown " << s << endl;
    else if(Lock[s] && state){
      cout << "Closed by " << s << endl;
      state = false;
    }
    else if(Lock[s] && !state){
      cout << "Opened by " << s << endl;
      state = true;
    }
  }


  return 0;
}
 