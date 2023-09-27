#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool dfs(int num, int val1, int val2, vector<int> &v){
  if(val1 > val2){
    int x = val1;
    val1 = val2;
    val2 = x;
  }
  if(num == 10)
    return true;

  if(val2 < v[num]){
    val2 = v[num];
    return dfs(num + 1, val1, val2, v);
  }else if(val1 < v[num]){
    val1 = v[num];
    return dfs(num + 1, val1, val2, v);
  }else {
    return false;
  }
}

int main(){
  int N;
  cin >> N;
  vector<int> v(10);
  vector<int> out(N, 0);
  for(int i=0;i<N;i++){
    for(int j=0;j<10;j++)
      cin >> v[j];
    if(dfs(0, 0, 0, v)){
      out[i] = 1;
    }
  }

  for(int i=0;i<N;i++)
    if(out[i] == 1)
      cout << "YES" << endl;
    else 
      cout << "NO" << endl;

  return 0;
}