#include <iostream>
#include <vector>
#include <vector>
#include <limits>
#include <algorithm>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> c;
  for(int temp; cin >> temp; )
    c.push_back(temp);
  vector<int> ans;  //n=i??????????????????(????°?????????°)?????????????????¨
  sort(c.begin(), c.end());

  ans.push_back(0);  //ans[0]???0
  
  for(int i=1; i<=n; ++i){
    int minim=numeric_limits<int>::max();
    int j = 0;
    while (c[j] <= i && j<=m-1){
      if(minim >= ans[i-c[j]]+1)
	minim = ans[i-c[j]]+1;
      ++j;
    }
    ans.push_back(minim);
  }

  cout << ans[n] << '\n';
}