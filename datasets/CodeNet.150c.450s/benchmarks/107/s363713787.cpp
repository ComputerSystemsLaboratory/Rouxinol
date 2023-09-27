#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <fstream>

#define SMAX 1000

using namespace std;

int main()
{
  char X[SMAX], Y[SMAX];
  scanf("%s",X);
  scanf("%s",Y);
  int size_X = strlen(X);
  int size_Y = strlen(Y);

  int LD[SMAX+1][SMAX+1];
  for(int i = 0; i <= size_X; i++) LD[i][0] = i;
  for(int i = 0; i <= size_Y; i++) LD[0][i] = i;

  int l;
  for(int i = 1; i <= size_X; i++) {
    for(int j = 1; j <= size_Y; j++) {
      if(X[i-1] == Y[j-1]) l = 0;
      else l = 1;
      LD[i][j] = min({LD[i-1][j]+1, LD[i][j-1]+1, LD[i-1][j-1]+l});
    }
  }
  cout << LD[size_X][size_Y] << endl;
  
  return 0;
}
