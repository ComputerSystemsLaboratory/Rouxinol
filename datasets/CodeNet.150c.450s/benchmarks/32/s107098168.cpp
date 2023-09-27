#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
  int m, nmin, nmax;
  cin >> m >> nmin >> nmax;

  while(m && nmin && nmax){

    vector<int> p(m);
    for(int i = 0; i < m; i++) cin >> p[i];

    sort(p.begin(), p.end());

    int gap = 0, cnt = 0;
    for(int i = m - nmin; i >= m - nmax; i--){

      if(gap <= p[i] - p[i-1]){
        gap = p[i] - p[i-1];
        //cout << gap << endl;                                                  
        cnt = m - i;
      }

    }

    cout << cnt << endl;
    cin >> m >> nmin >> nmax;

  }

  return 0;

}

