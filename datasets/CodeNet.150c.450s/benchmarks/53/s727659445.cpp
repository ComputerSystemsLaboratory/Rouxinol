#include <bits/stdc++.h>

using namespace std;

void PrimalFactorize(int Nin, vector<int> &ans)
{

  int p = 2;
  const int Nsqrt = sqrt(Nin);

  while(Nin != 1 && p <= Nsqrt)
  {

    for(int i = 0; i < ans.size(); ++i)
    {
      if(p % ans[i] == 0 && p != ans[i])
      {
	p += 2;
	continue;
      }
    }

    if(Nin % p == 0)
    {
      ans.push_back(p);
      Nin /= p;
    }
    else 
    {
      if(p == 2)
	++p;
      else 
	p += 2;
    }
  }

  if(Nin != 1)
    ans.push_back(Nin);

  return;
}

int main()
{
  int N;
  cin >> N;

  vector<int> ans;

  PrimalFactorize(N, ans);

  cout << N << ":";

  for(int i = 0; i < ans.size(); ++i)
    cout << " " << ans[i];
  cout << endl;

  return 0;
}

