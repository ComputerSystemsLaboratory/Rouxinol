#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <deque>
using namespace std;

#define REP(i,s,n) for(int i=s;i<n;i++)
#define rep(i,n) REP(i,0,n)

typedef pair<int,int> ii;
string s;
 
int main(){
  getline(cin,s);
  deque<ii> ans;
  deque<int> deq;
  for(int i=0; i<s.size(); i++){
    if( s[i] == '\\' ) deq.push_back(i);
    else if( s[i] == '/' && !deq.empty() ){
      int sp = deq.back(); deq.pop_back();
      int area = i - sp;
      while( !ans.empty() && sp <= ans.back().first ){
    area += ans.back().second;
    ans.pop_back();
      }
      ans.push_back(ii(sp,area));
    }
  }
  int sum = 0;
  for(int i=0; i<ans.size(); i++){
  	sum += ans[i].second;
  } 
  cout << sum << endl << (int)ans.size();
  for(int i=0; i<ans.size(); i++){	
  	cout << " " << ans[i].second; 
  }
  cout << endl;
}