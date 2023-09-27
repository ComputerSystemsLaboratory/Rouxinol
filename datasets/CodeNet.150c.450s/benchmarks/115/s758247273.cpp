#include <iostream>
#include <vector>
using namespace std;

int max(int a,int b);

int main() {
  int q;
  cin >> q;
  for (int i=0;i<q;++i) {
    string str1,str2;
    cin >> str1 >> str2;
    int size1 = str1.size();
    int size2 = str2.size();
    int matrix[size1+1][size2+1];
    for (int j=0;j<=size1;++j)
      matrix[j][0] = 0;
    for (int j=0;j<=size2;++j)
      matrix[0][j] = 0;
    for (int j=1;j<=size1;++j) {
      for (int k=1;k<=size2;++k) {
	if (str1[j-1]==str2[k-1]) {
	  matrix[j][k] = 1 + matrix[j-1][k-1];
	}
	else {
	  matrix[j][k] = max(matrix[j][k-1],matrix[j-1][k]);
	}
      }
    }
    cout << matrix[size1][size2] << endl;
  }
}

int max(int a,int b) {
  if (a>b)
    return a;
  else
    return b;
}