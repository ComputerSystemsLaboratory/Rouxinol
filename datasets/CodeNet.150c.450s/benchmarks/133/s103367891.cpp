#include <bits/stdc++.h>
using namespace std;

int main(){
  int d;
  cin >> d;
  vector<int> c(27);
  for(int i=1;i<=26;i++){
    cin >> c.at(i);
  }
  vector<vector<int>> s(d+1, vector<int>(27));
  for(int i=1;i<=d;i++){
    for(int j=1;j<=26;j++){
      cin >> s.at(i).at(j);
    }
  }
  vector<int> t(d+1); //1~26
  for(int i=1;i<=d;i++){
    cin >> t.at(i);
  }
  vector<int> v(d+1);
//  vector<vector<int>> last(d+1, vector<int>(27));
  vector<int> last(27,0);
  int score=0;
  
  for(int i=1;i<=d;i++){
    last.at(t.at(i)) = i;
    v.at(1) += s.at(i).at(t.at(i));
    for(int j=1;j<=26;j++){
//      v.at(1) = v.at(1) - c.at(j)*(i-last.at(i).at(j));
      v.at(1) = v.at(1) - c.at(j)*(i-last.at(j));
    }
    score = max(1000000+v.at(1),0);
    cout << v.at(1) << endl;
  }
  
}