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
  using P = pair<int, int>;
  stack<int> st_left;// '\'の位置
  stack<P> st_lrs;//left(\), right(/), square(水平方向の水たまり)

  string input;
  cin >> input;
  for(int i=0; i<(int)input.size(); i++){
    if(input[i]=='\\') st_left.push(i);
    // if(input[i]=='\\') cout << " i: " << i << " \\ " << endl;
    else if(input[i]=='/'){
      if(st_left.empty()) continue;
      int left = st_left.top();
      st_left.pop();
      int right = i;
      int square = right - left;
      st_lrs.push(P(left, right));
    }
  }

  vector<int> puddles;//水たまり
  int sum_size = 0;
  while(!st_lrs.empty()){
    int left = st_lrs.top().first;
    int right = st_lrs.top().second;
    st_lrs.pop();
    int size = right - left;

    while(!st_lrs.empty()){//結合できる水たまりは結合する
      int left2 = st_lrs.top().first;
      int right2 = st_lrs.top().second;
      if(left < left2  &&  right2 < right){//水たまりを包括していたら
        size += right2 - left2;        
        st_lrs.pop();
      }
      else break;
    }
    puddles.push_back(size);
    sum_size += size;
  }

  // cout << sum_size << endl;
  // cout << (int)puddles.size(); if(sum_size!=0)cout<<" ";
  // print_vec(puddles, true);

  if(sum_size==0){//0のときはsizeの後に空白なしで改行入れる
    cout << sum_size << endl;
    cout << (int)puddles.size() << endl;
  }
  else{
    cout << sum_size << endl;
    cout << (int)puddles.size() << " ";
    print_vec(puddles, true);
  }
  return 0;
}


