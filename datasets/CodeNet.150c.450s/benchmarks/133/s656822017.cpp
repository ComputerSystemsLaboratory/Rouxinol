#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

template <typename TYPE>
void print_vec(const vector<TYPE>& v){
	for(int i=0; i<v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
}

template <typename TYPE>
void print_vec2(const vector<vector<TYPE>>& v){
  cout << endl;
  for(int i=0; i<v[0].size(); i++) cout << i << "   "; 
  cout << endl;
	for(int i=0; i<v.size(); i++){
		cout << "i=" << i << ":   " << endl;
		for(int j=0; j<v[i].size(); j++){
			if(v[i][j] == 0) cout << "\x1B[0m" << v[i][j] << "   ";
      else cout << "\x1B[31m" << v[i][j] << "   ";//https://stackoverrun.com/ja/q/12618775
		}
		cout << "\x1B[0m" << endl;
	}
}
 
int main(){
  int D;
  cin >> D;
  vector<int> c(26, 0);
  for(int i=0; i<26; i++) cin >> c[i];
  vector<vector<int>> s(D, vector<int>(26, 0));
  for(int i=0; i<D; i++){
    for(int j=0; j<26; j++){
      cin >> s[i][j];
    }
  }

  vector<int> t(D);
  for(int i=0; i<D; i++){
    cin >> t[i];
    t[i]--;
  }
  // cout << " c: " ; print_vec(c);
  // //cout << " s: " << endl; print_vec2(s);
  // cout << " t: " ; print_vec(t);
  //vector<vector<int>> last(D, vector<int>(26, 0));
  vector<int> last(26, -1);
  ll score = 0;
  for(int d=0; d<D; d++){
    int type = t[d];
    score += s[d][type];
    last[type] = d;
  
    
    for(int i=0; i<26; i++){
      score = score - c[i] * (d - last[i]);
      //cout << " d: " << d << " i: " << i << " c[]: " << c[type] << " score: " << score << endl;
    }
    //cout << " c[3]: " << c[3] << " (d - last[3]): "<< (d - last[3]) << "  c[3] * (d - last[3]): " << c[3] * (d - last[3]) << endl;
    cout << score << endl;
  }

  // int type = 1;
  // int cnt = 0;
  // while(cnt < D){
  //   cout << type << endl;
  //   type = type % 26 + 1;
  //   cnt++;
  // }

    
}
