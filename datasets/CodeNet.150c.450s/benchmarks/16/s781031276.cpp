#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
typedef pair<int, int> P;

class stack{
  public:
  P v[22222];
  int t;
  stack(){
    t = 0;
    v[0] = P(-1, -1);
  }
  stack(P zero){
    t = 0;
    v[0] = zero;
  }
  void push(P a){
    t++;
    v[t] = a;
  }
  void pop(){
    t--;
  }
  P top(){
    return v[t];
  }
  void pr(){
    for(int i = 1; i <= t; i++){
      cout << v[i].second << " ";
    }
    cout << endl;
  }
  bool empty(){
    return t == 0;
  }
};

int main(void){
  ios::sync_with_stdio(false);
  cin.tie(0);
  string str; cin >> str;
  vector<int> height(str.length()+1);
  vector<int> lmax(str.length()+1), rmax(str.length()+1);
  height[0] = 0;
  for(int i=1; i <= str.length(); i++){
    if(str[i-1] == '\\'){
      height[i] = height[i-1] - 1;
    }
    if(str[i-1] == '/'){
      height[i] = height[i-1] + 1;
    }
    if(str[i-1] == '_'){
      height[i] = height[i-1];
    }
  }
  int mv = INT_MIN;
  for(int i = 0; i < height.size(); i++){
    mv = max(mv, height[i]);
    lmax[i] = mv;
  }
  mv = INT_MIN;
  for(int i = height.size()-1; i >= 0; i--){
    mv = max(mv, height[i]);
    rmax[i] = mv;
  }

  stack s;
  vector<int> l;
  int ans = 0;
  int anstmp = 0;
  P now(0, 0); //x, height
  for(int i = 0; i < str.length(); i++){
    now.first++;
    if(str[i] == '\\'){
      s.push(now);
      now.second--;
    }
    if(str[i] == '/'){
      now.second++;
      if(s.empty()) continue;
      if(s.top().second == now.second){
        int d = now.first - s.top().first;
        s.pop();
        ans += d;
        anstmp += d;
        if(!(lmax[now.first] > now.second && rmax[now.first] > now.second)){
          l.push_back(anstmp);
          anstmp = 0;
        }
      }
    }
    if(str[i] == '_'){
      if(s.empty()) continue;
      if(s.top().second == now.second){
        int d = now.first - s.top().first;
        s.pop();
        ans += d;
        anstmp += d;
        if(!(lmax[now.first] > now.second && rmax[now.first] > now.second)){
          l.push_back(anstmp);
          anstmp = 0;
        }
      }
    }
  }
  cout << ans << endl;
  if(l.size() == 0){
    cout << l.size() << endl;
  }else{
    cout << l.size() << " ";
    for(int i = 0; i < l.size(); i++){
      if(i == l.size()-1){
        cout << l[i] << endl;
      }else{
        cout << l[i] << " ";
      }
    }
  }
  return 0;
}