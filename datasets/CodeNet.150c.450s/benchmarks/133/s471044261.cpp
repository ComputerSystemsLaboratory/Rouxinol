#include<bits/stdc++.h>
using namespace std;
int main() {
  int d;
    cin >> d;
  vector<int> c(26);
  for ( int i = 0 ; i < 26; i++  ) {
    cin >> c.at(i);
  }
  
  vector<vector<int>> data(d,vector<int>(26));
  for ( int i = 0 ; i < d ; i++ ) {
    for ( int j = 0 ; j < 26 ; j++ ) {
      cin >> data.at(i).at(j);
    }
  }
  
  vector<int> contest(d);
  for ( int i = 0 ; i < d ; i++ ) {
   cin >> contest.at(i);
  }
  
  vector<int> memo(26,0);
  int score =0;
  for ( int i = 0 ; i < d ; i++ ) {
    
    int con=contest.at(i)-1;
   
    score += data.at(i).at(con);
 
    memo.at(con)=i+1;
    //cout << score << data.at(con).at(i) << endl;
    for ( int j = 0 ; j < 26 ; j++ ) {
      score -= c.at(j)*(i+1-memo.at(j));
    }
    cout << score << endl;
  }
  
}