#include <bits/stdc++.h>
using namespace std;

int main(){
  string S; cin >> S;
  vector<int> h ={0};
  int N = S.size();
  for(int i = 0; i < N; ++i){
    int tmp = h[i];
    switch(S[i]){
      case '\\':
        h.push_back(--tmp);
        break;
      case '/':
        h.push_back(++tmp);
        break;
      case '_':
        h.push_back(tmp);
        break;
      default: 
        cout << "Error" << endl;
    }
  }
  vector<int> ans;
  int v=0;
  int cnt=0;
  vector<int>::iterator it = h.begin();
  while(it != h.end()){
    vector<int>::iterator idx = it;
    idx++;
    if(idx == h.end())break;
    if(*it <= *idx){
      it++;
      continue;
    }
    int volume = 0;
    int flag = 0;
    while(*it > *idx && idx != h.end()){
      volume += (*it-*idx);
      // cout << *idx << " ";
      idx++;
      if(idx == h.end())break;
      if(*it == *idx){
        // cout << endl;
        // cout << *it << " " << *idx << endl;
        v += volume;
        cnt++;
        ans.push_back(volume);
        it = idx;
        flag = 1;
        break;
      }
    }
    if(!flag) it++;
  }
  cout << v << endl;
  cout << cnt;
  for(auto a : ans) cout << " " << a; 
  cout << endl;

  return 0;
}

