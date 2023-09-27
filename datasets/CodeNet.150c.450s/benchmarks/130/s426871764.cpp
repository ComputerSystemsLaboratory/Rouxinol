#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  vector<vector<int> > v(n, vector<int>(m));
  vector<int> a(m);
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> v[i][j];
    }
  }
  for(int i=0;i<m;i++){
    cin >> a[i];
  }

  for(int i=0;i<n;i++){
    int sum=0;
    for(int j=0;j<m;j++){
      sum += v[i][j] * a[j];
    }
    cout << sum << endl;
  }

  return 0;
}