#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


long long calc(int i, int j, vector<vector<long long> > &l, const string& x, const string& y){
  if(i == 0 || j == 0){
    l[i][j] = 0;
    return l[i][j];
  }
  if(l[i][j] >= 0){
    return l[i][j];
  }else{
    if(x[i-1] == y[j-1]){
      l[i][j] = 1 + calc(i-1, j-1, l, x, y);
    }else{
      l[i][j] = max(calc(i-1, j, l, x, y), calc(i, j-1, l, x, y));
    }
    return l[i][j];
  }
}
int main(){
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    string x,y;
    cin >> x >> y;
    vector<vector<long long> > l(x.length()+1, vector<long long>(y.length()+1, -1));
    cout << calc(x.length(), y.length(), l, x, y) << endl;
  }
}