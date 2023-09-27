#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > arr;

void display(int n){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < 10; j++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}

bool dfs(int n, int i, int left, int right){
  if(i == 10) return true;

  bool ans = false;
  if(left < arr[n][i]) ans = dfs(n, i + 1, arr[n][i], right);
  if(right < arr[n][i]) ans = dfs(n, i + 1, left, arr[n][i]);

  return ans;
  
}

int main(){
  int n;
  cin >> n;
  arr.resize(n);
  for(int i = 0; i < n; i++){
    for(int j = 0; j < 10; j++){
      int tmp;
      cin >> tmp;
      arr[i].push_back(tmp);
    }
  }

  //display(n);

  for(int i = 0; i < n; i++){
	bool ans = dfs(i, 0, 0, 0);
	if(ans) cout << "YES" << endl;
	else cout << "NO" << endl;
  }
  
  
  return 0;
}