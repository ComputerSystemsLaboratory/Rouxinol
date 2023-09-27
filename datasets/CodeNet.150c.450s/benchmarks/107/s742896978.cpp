#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
using ll = long long;

string a, b;

void input(){
  cin >> a >> b;
}

ll editDistance(string s, string t){
  int l1 = s.length();
  int l2 = t.length();
  int dist[l2 + 1][l1 + 1];
  for(int j = 0; j <= l2; ++j){
    dist[j][0] = j;
  }
  for(int i = 0; i <= l1; ++i){
    dist[0][i] = i;
  }
  for(int j = 1; j <= l2; ++j){
    for(int i = 1; i <= l1; ++i){
      int cost;
      if(s[i - 1] == t[j - 1]){
        cost = 0;
      }else{
        cost = 1;
      }
      int tmp = min(dist[j - 1][i] + 1, dist[j][i - 1] + 1);
      dist[j][i] = min(tmp, dist[j - 1][i - 1] + cost);
    }
  }
  return dist[l2][l1];


}

int main(){
  input();
  cout << editDistance(a, b) << endl;
}
