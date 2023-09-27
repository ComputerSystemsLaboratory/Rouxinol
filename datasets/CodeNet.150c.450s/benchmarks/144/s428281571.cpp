#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  int n, m, l;
  cin >> n >> m >> l;
  vector<vector<long long> > a(n, vector<long long>(m));
  vector<vector<long long> > b(m, vector<long long>(l));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> a[i][j];
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<l;j++){
      cin >> b[i][j];
    }
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<l;j++){
      long long sum = 0;
      for(int k=0;k<m;k++){
        sum += a[i][k] * b[k][j];
      }
      cout << sum;
      if(j!=l-1)cout << " ";
    }
    cout << endl;
  }



  return 0;
}