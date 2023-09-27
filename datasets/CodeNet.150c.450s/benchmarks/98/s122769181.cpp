#include<iostream>
#include<vector>

using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  vector<int> anss, anst;
  while(n){
    vector<int> s(n) ,t(m), mini(2,300);
    int sums = 0, sumt = 0;
    for(int i = 0; i < n ; i++){
      cin >> s[i];
      sums += s[i];
    }
    for(int i = 0; i < m ; i++){
      cin >> t[i];
      sumt += t[i];
    }
    if(sums == sumt){
      for(int i = 0 ; i < n ; i++){
        for(int j = 0; j < m ; j++){
          if(s[i] == t[j] && mini[0] > s[i]){
            mini[0] = s[i];
            mini[1] = t[j];
          }
        }
      }
    }
    else{
      for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
          if( 2 * (s[i] - t[j]) == sums - sumt && mini[0] + mini[1] > s[i] + t[j] ){
            mini[0] = s[i];
            mini[1] = t[j];
          }
        }
      }
    }
    anss.push_back(mini[0]);
    anst.push_back(mini[1]);
    cin >> n >> m;
  }
  for(int i = 0 ; i < (int)anss.size() ; i++){
    if(anss[i] == 300) cout << -1 << endl;
    else cout << anss[i] << " " << anst[i] << endl;
  }
}

