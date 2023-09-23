#include <iostream>
using namespace std;

int main()
{
  int n;
  int a[10000], b[10000];
  while (1)
  {
    cin >> n;
    if (n == 0) return 0;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i] >> b[i];
    }
    int Ascore = 0, Bscore = 0;
    for (int i = 0; i < n; i++)
    {
      if (a[i] > b[i]) Ascore += a[i]+b[i];
      if (a[i] < b[i]) Bscore += a[i]+b[i];
      if (a[i] == b[i])
      {
        Ascore += a[i];
        Bscore += b[i];
      }
    }
    cout << Ascore << ' ' << Bscore << endl;
  }
}