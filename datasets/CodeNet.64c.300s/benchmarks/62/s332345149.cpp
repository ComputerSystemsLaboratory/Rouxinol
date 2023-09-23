#include<iostream>

using namespace std;

int main()
{
  int mat[100][100], vec[100], n, m;
  cin >> n >> m;
  for(int y=0; y<n; y++){
    for(int x=0; x<m; x++){
      cin >> mat[x][y];
    }
  }
  for(int y=0; y<m; y++){
    cin >> vec[y];
  }

  for(int y=0; y<n; y++){
    int buf=0;
    for(int x=0; x<m; x++){
      buf+=mat[x][y]*vec[x];
    }
    cout << buf << endl;
  }
  return 0;
}

