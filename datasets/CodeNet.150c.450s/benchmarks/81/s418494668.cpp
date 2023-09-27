#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>

#define REP(i,s,n) for(int i=(int)(s);i<(int)(n);i++)

using namespace std;
typedef long long int ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef pair<int, int> PI;
const ll mod = 1e9 + 7;



int main(void){
  int n;// # of edge
  while (true)
    {
      cin >> n;
      if (n == 0)
	break;
      set<int> towns;
      map<PI,int> edges;
      REP(i,0,n)
	{
	  int a, b, c;
	  cin >> a >> b >>c;
	  towns.insert(a);
	  towns.insert(b);
	  PI p;
	  if (a < b)
	    p = PI(a,b);
	  else
	    p = PI(b,a);
	  edges[p] = c;
	}
      VI t(towns.size());
      vector<VI> e(towns.size(), VI(towns.size()));
      int j = 0;
      for (auto i = towns.begin(); i != towns.end(); i++)
	{
	  t[j] = *i;
	  j++;
	}
      for (uint i = 0; i < t.size(); i++)
	for (uint j = i; j < t.size(); j++)
	  if (edges.find(PI(t[i],t[j]))!=edges.end()) 
	    {
	      e[i][j] = edges[PI(t[i],t[j])];
	      e[j][i] = edges[PI(t[i],t[j])];
	    }
	  else if (i == j)
	    e[i][i] = 0;
	  else 
	    {
	      e[i][j] = 1000;
	      e[j][i] = 1000;
	    }

      for (uint r = 0; r < t.size(); r++)
	for (uint p = 0; p < t.size(); p++)
	  for (uint q = 0; q < t.size(); q++)
	    if (e[p][q] > e[p][r] + e[r][q])
	      e[p][q] = e[p][r] + e[r][q];
      int min = 0;
      int i_min = 0;
      bool first = true;
      for (uint p = 0; p < t.size(); p++)
	{
	  if (accumulate(e[p].begin(), e[p].end(), 0) < min|| first)
	    {
	      min = accumulate(e[p].begin(), e[p].end(), 0);
	      i_min = t[p];
	      first = false;
	    }
	}
      cout << i_min <<" "<< min << endl;
    }
}