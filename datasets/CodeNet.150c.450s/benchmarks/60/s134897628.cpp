//16D8103012G 三品海渡
#include<iostream>
#include<vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<vector<int>> ln(n, vector<int>(n+1, 0));
  vector<vector<int>> m(n,vector<int>(n,0));
  vector<int> rem(n, 0);
  for (int i = 0; i < n; i++)
    {
      cin >> ln[i][0];
      cin >> ln[i][1];
      for (int j = 2; j < ln[i][1]+2; j++)
	{
	  cin >> ln[i][j];
	}
    }
  for (int i = 0; i < n; i++)
    {
      for (int j = 2; j < n+1; j++)
	{
	  if (ln[i][j] != 0 )
	    {
	      m[i][ln[i][j]-1] = 1;
	    }
	}
    }
  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
	{
	  cout << m[i][j];
	  if(j!=n-1)
	    {
	      cout << " ";
	    }
	}
      cout << endl;
    }
  return 0;
}


