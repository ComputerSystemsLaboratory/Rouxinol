#include <utility>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
  int N, M;
  while(cin >> N >> M && N >0)
    {
      pair<int, int> PD[10000];
      for(int i=0;i<N;i++)
	cin >> PD[i].second >> PD[i].first;
      sort(PD, PD+N);
      int Mcur = M;
      int sum = 0;
      for(int i=0;i<N;i++)
	sum += PD[i].first * PD[i].second;
      for(int i=N-1;i>=0;i--)
	{
	if(Mcur <= PD[i].second)
	  {
	  sum -= Mcur*PD[i].first;
	  break;
	  }
	else
	  {
	  sum -= PD[i].first*PD[i].second;
	  Mcur -= PD[i].second;
	  }
	}
      cout << sum << endl;
    }
}
