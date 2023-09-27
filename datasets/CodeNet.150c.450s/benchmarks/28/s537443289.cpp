#include "bits/stdc++.h"
using namespace std;
using ll = long long;

template <typename T>
void print_vec(const vector<T>& v, bool is_reverse=false, int num=0){
  if(num == 0) num = (int)v.size();
  if(is_reverse) for(int i=num-1; i>=0; i--){ cout<<v[i]; if(i!=0) cout<<" ";}
  else for(int i=0; i<num; i++){ cout<<v[i]; if(i!=num-1) cout<<" ";}
  cout << endl;
}

template <typename T>
void print_pairvec(const vector<T> &v, int num=0){
  if(num == 0) num = (int)v.size();
  for(int i=0; i<num; i++){ cout << v[i].first << v[i].second; if(i!=num-1) cout << " ";}
  cout << endl;
}

template <typename T>
void print_vec2(const vector<vector<T>>& v){
  cout << endl; cout << "       ";
  for(int i=0; i<v[0].size(); i++) cout << i << "   "; 
  cout << endl;
	for(int i=0; i<v.size(); i++){
		cout << "i=" << i << ":   ";
		for(int j=0; j<v[i].size(); j++){
			if(v[i][j] == 0) cout << "\x1B[0m" << v[i][j] << "   ";
      else cout << "\x1B[31m" << v[i][j] << "   ";//https://stackoverrun.com/ja/q/12618775
		}
		cout << "\x1B[0m" << endl;
	}
}

int main(){
  int n, k;
  cin >> n >> k;
  vector<ll> w(n);
  for(int i=0; i<n; i++) cin >> w[i];

  ll left = 0, right = 1e9 + 1;
  while(right - left > 1){
    ll mid = (left + right) /2;
    vector<ll> track(k, 0);
    int id = 0;
    bool is_can = true;
    for(int i=0; i<n; i++){
      while(track[id]+w[i] > mid){
        id++;
        if(id>=k){
          is_can = false;
          break;
        }
      }      
      if(is_can == false) break;
      track[id] += w[i];
    }
    if(track.back() > mid) is_can = false;
    
    if(is_can) right = mid;
    else left = mid;
  }
  cout << right << endl;


  // 以下問題勘違いして トラックの順番を毎回変えられるものだと
  // sort(w.rbegin(), w.rend());
  // priority_queue<ll, vector<ll>, greater<ll>> _pri_qu;
  // for(int i=0; i<k; i++) _pri_qu.push(0);
  // ll left = 0, right = 1e9+1;
  // while(right - left > 1){
  //   ll mid = (left + right) /2;
  //   bool is_can = true;
  //   priority_queue<ll, vector<ll>, greater<ll>> pri_qu = _pri_qu;
  //   for(int i=0; i<n; i++){
  //     ll track = pri_qu.top();
  //     pri_qu.pop();
  //     if(track + w[i] > mid) is_can = false;
  //     pri_qu.push(track+w[i]);
  //   }

  //   if(is_can) right = mid;
  //   else left = mid;
  // }
  // cout << right << endl;
}


