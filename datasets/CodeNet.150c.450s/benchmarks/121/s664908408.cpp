#include<iostream>
using namespace std;

char F[102][102];

void
DFS (int Y, int X, char A)
{
  if (F[Y][X] != A)
    return;

  F[Y][X] = '.';

  DFS (Y - 1, X, A);
  DFS (Y, X + 1, A);
  DFS (Y + 1, X, A);
  DFS (Y, X - 1, A);
}

int
main ()
{
  int N, M;
  int cnt;

  while (true)
    {

      cin >> N >> M;
      cnt = 0;
      if (N == 0 && M == 0)
	break;

      for (int y = 1; y <= N; y++)
	{
	  for (int x = 1; x <= M; x++)
	    {
	      cin >> F[y][x];
	    }
	}

      for (int y = 1; y <= N; y++)
	{
	  for (int x = 1; x <= M; x++)
	    {
	      if (F[y][x] == '@' || F[y][x] == '#' || F[y][x] == '*')
		{
		  cnt++;
		  DFS (y, x, F[y][x]);
		}
	    }
	}



      cout << cnt << endl;
    }





  return 0;
}