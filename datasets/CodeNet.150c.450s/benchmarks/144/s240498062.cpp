#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, l;
  cin >> n >> m >> l;
  vector<vector<int> > adata(n, vector<int>(m));
  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      cin >> adata.at(i).at(j);
    }
  }
  
  vector<vector<int> > bdata(m, vector<int>(l));
  for(int i=0; i<m; i++) {
    for(int j=0; j<l; j++) {
      cin >> bdata.at(i).at(j);
    }
  }
  
  long sum = 0;
  vector<vector<long> > cdata(n, vector<long>(l));
  for(int i=0; i<n; i++) {
    for(int j=0; j<l; j++) {
      for(int k=0; k<m; k++) {
        if(j != l-1) {
          if(k != m-1) {
            sum += adata.at(i).at(k) * bdata.at(k).at(j);
          }
          else {
            sum += adata.at(i).at(k) * bdata.at(k).at(j);
            cdata.at(i).at(j) = sum;
            cout << cdata.at(i).at(j) << " ";
            sum = 0;
          }
        }
        else {
          if(k != m-1) {
            sum += adata.at(i).at(k) * bdata.at(k).at(j);
          }
          else {
            sum += adata.at(i).at(k) * bdata.at(k).at(j);
            cdata.at(i).at(j) = sum;
            cout << cdata.at(i).at(j) << endl;
            sum = 0;
          }
        }
      }
    }
  }
    
  return 0;
}
