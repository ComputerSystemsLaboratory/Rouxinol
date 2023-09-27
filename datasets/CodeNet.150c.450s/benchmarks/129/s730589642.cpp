#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int r, c;
  cin >> r >> c;
  vector< vector<int> > matrix(r+1, vector<int>(c+1));

  for(int i = 0; i < r; i++)
  {
    for(int j = 0; j < c; j++)
      cin >> matrix[i][j];
  }

  for(int i = 0; i < r; i++)
  {
    int row = 0;
    for(int j = 0; j < c; j++)
    {
      row += matrix[i][j];
    }
    matrix[i][c] = row;
  }

  for(int j = 0; j < c+1; j++)
  {
    int column = 0;
    for(int i = 0; i < r; i++)
    {
      column += matrix[i][j];
    }
    matrix[r][j] = column;
  }

  for(int i = 0; i < r+1; i++)
  {
    for(int j = 0; j < c+1; j++)
    {
      if(j != 0)
      {
        cout << " " << flush;
      }
      cout << matrix[i][j] << flush;
    }
    cout << endl;
  }
  return 0;
}