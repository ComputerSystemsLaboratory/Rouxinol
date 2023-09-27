#include <iostream>
using namespace std;

int main(void)
{
  int n, m;
  int i, j;
  int temp;
  int array[100];
  int gr[100][100];

  cin >> n >> m;
  
  for(i = 0; i < n; i++){
    for(j = 0; j < m; j++){
      cin >> gr[i][j];
    }
  }

  for(j = 0; j < m; j++){
    cin >> array[j];
  }

  for(i = 0; i < n; i++){
    temp = 0;
    for(j = 0; j < m; j++){
      temp = temp + gr[i][j]*array[j];
    }
    cout << temp << endl;
  }

  return 0;
}