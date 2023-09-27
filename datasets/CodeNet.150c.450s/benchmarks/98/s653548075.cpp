#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

vector<P> result;


int sum(vector<int> vec){
  int sum = 0;
  for(int i = 0; i < vec.size(); i++){
    sum += vec[i];
  }
  return sum;
  
}

void solve(int sub, vector<int> tarou, vector<int> hanako, bool flag){
  result.clear();
  if(sub % 2 == 1){
    cout << "-1" << endl;
    return;
  }
  int a = sub / 2;
  for(int i = 0; i < tarou.size(); i++){
    for(int j = 0; j < hanako.size(); j++){
      if(flag){
        if((tarou[i] - hanako[j]) == a){
          result.push_back(P(tarou[i], hanako[j]));
        }
      }
      else{
        if((hanako[j] - tarou[i]) == a ){
          result.push_back(P(tarou[i], hanako[j]));
        }
      }
    }
  }

  if(result.size() == 0){
    cout << "-1" << endl;
    return;
  }
  
  int index = 0;
  int s = result[0].first + result[0].second;
  for(int i = 1; i < result.size(); i++){
    int tmp = result[i].first + result[i].second;
    if(s > tmp) {
      s = tmp;
      index = i;
    }
  }
  
  cout << result[index].first << " " << result[index].second << endl;
}

int main(){
  int n, m;
  while(1){
    cin >> n >> m;
    if(n == 0 && m == 0) break;
    vector<int> tarou, hanako;
    for(int i = 0; i < n; i++){
      int tmp ;
      cin >> tmp;
      tarou.push_back(tmp);
    }
    for(int i = 0; i < m; i++){
      int tmp;
      cin >> tmp;
      hanako.push_back(tmp);
    }

    //cout << "(" << sum(tarou) << ", " << sum(hanako) << ")" << endl;
    int sub = abs(sum(tarou) - sum(hanako));
    bool flag = sum(tarou) > sum(hanako);
    solve(sub, tarou, hanako, flag);
  }
}