#include <iostream>
#include <queue>

using namespace std;

#define ll long long

int main(){
  ll n, qq;
  cin >> n >> qq;
  queue< pair<string,ll> > q;
  for(ll i = 0; i < n; i++){
    string s;
    ll time;
    cin >> s >> time;
    q.push(make_pair(s,time));
  }

  ll time = 0;
  while(!q.empty()){
    if(q.front().second > qq){
      time += qq;
      q.front().second -= qq;
      q.push(q.front());
      q.pop();
    }else{
      time += q.front().second;
      cout << q.front().first << ' ' <<  time << endl;
      q.pop();
    }
  }
  

}