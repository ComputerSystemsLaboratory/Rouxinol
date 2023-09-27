#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int lcs(string a, string b) {
  int longest_length = 0;
  int m = a.size(), n = b.size();
  int table[m+1][n+1];
  for(int i = 0; i < m+1; i++) table[i][0] = 0; 
  for(int i = 0; i < n+1; i++) table[0][i] = 0; 
  for(int i = 1; i < m+1; i++) {
    for(int j = 1; j < n+1; j++) {
      if(a[i-1] == b[j-1]){
        table[i][j] = table[i-1][j-1] + 1;
      } else {
        table[i][j] = max(table[i-1][j], table[i][j-1]);
      } 
      longest_length = max(longest_length, table[i][j]);
    }
  }
  return longest_length;
}

int main() {
  int n = 0;
  cin >> n;
  string a, b;
  for(int i = 0; i < n; i++) {
    cin >> a >> b;
    int l = lcs(a, b);
    cout << l << endl;
  }
}