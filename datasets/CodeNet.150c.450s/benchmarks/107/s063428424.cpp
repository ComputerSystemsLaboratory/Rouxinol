#include <iostream>
#include <vector>

using namespace std;

#define FOR(i,n) for(int i=0; i<n; i++)
#define FOR2(i, z, n) for(int i=z; i<n; i++)

int main() {
  string str1, str2;
  cin >> str1 >> str2;

  vector<vector<int> > matrix(str1.length() + 1, vector<int>(str2.length() + 1, 0));

  FOR2(i, 1, str1.length() + 1) {
    matrix[i][0] = i;
  }
  FOR2(i, 1, str2.length() + 1) {
    matrix[0][i] = i;
  }

  FOR2(i, 1, str1.length() + 1) {
    FOR2(j, 1, str2.length() + 1) {
      int sub = (str1[i - 1] == str2[j - 1] ? 0 : 1);
      matrix[i][j] = min(min(matrix[i - 1][j] + 1, matrix[i][j - 1] + 1), matrix[i - 1][j - 1] + sub);
    }
  }

  //debug to display the matrix
  /*FOR(i, str2.length() + 1) {
    FOR(j, str1.length() + 1) {
      cout << matrix[j][i] << " ";
    }
    cout << endl;
  }*/

  cout << matrix[str1.length()][str2.length()] << endl;
}
