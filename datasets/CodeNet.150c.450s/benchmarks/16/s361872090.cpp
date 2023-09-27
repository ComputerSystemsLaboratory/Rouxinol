#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int>Pi;
#define S second
#define F first
#define psb push_back
#define pob pop_back
#define mpa make_pair
int main(){
  stack<int>place;
  vector<Pi>sub;
  string s;
  int flag = 0,flug = 0;
  int cnt = 0;
  cin >> s;
  for(int i = 0;i < s.size();i++){
    if(s[i] == '\\'){place.push(i);cnt++;flag = true;}
    else if(s[i] == '/'){
      cnt--;if(flag)flug = true;
      if(place.empty())sub.psb(mpa(0,cnt));
      else {
	int p = place.top();place.pop();
	int size = sub.size();size--;
	int sum = i - p;
	while(~size && sub[size].S > cnt){
	  sum += sub[size].F;sub.pob();size--;
	}
	sub.psb(mpa(sum,cnt));
      }
    }
  }
  int water = 0;cnt = 0;
  for(int i = 0;i < sub.size();i++){
    if(sub[i].F){cnt++;water += sub[i].F;}
  }
  cout << water << endl;
  cout << cnt;
  if(!flug || sub.empty())cout << endl;
  else cout << " ";
  int i;
  int sz = -1;
  for(i = sub.size() - 1;i >= 0;i--){
    if(sub[i].F){sz = i;break;}
  }
  for(i = 0;i <= sz - 1;i++){
    if(sub[i].F)cout << sub[i].F << " ";
  }
  if(~sz && sub[i].F)cout << sub[i].F << endl;
  return 0;
}