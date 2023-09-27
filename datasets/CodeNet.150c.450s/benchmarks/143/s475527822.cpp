#include <algorithm>
#include<iostream>
#include<vector>
#include<deque>
#include<queue>
#include<stack>
#include<list>
#include<map>
#include<set>
#include<string>
#include <sstream>
#include<bitset>

#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>
const int INF = 0x7fffffff;
using lll = long long;
using ull = unsigned long long;
using namespace std;

int box[100001];

int main(){

  lll ii,jj,kk;
  vector<int> ret;
  lll n;

  cin >> n;

  vector<lll> a(n);
  lll sum;
  
  memset(box,0,sizeof(box));
  sum = 0;

  for(ii=0;ii<n;ii++){

    cin >> a[ii];
    box[a[ii]]++;
    sum += a[ii];

  }
  
  lll q;

  cin >> q;

  lll b,c;

  //for(jj=1;jj<=4;jj++){
  //
  //  cout << box[jj] << endl;
  //
  //}
  
  for(ii=0;ii<q;ii++){

    cin >> b >> c;

    sum -= b * box[b];
    sum += c * box[b];

    box[c] += box[b];
    box[b] =  0     ;




    //cout << "=========" << endl;
    //
    //for(jj=1;jj<=4;jj++){
    //  cout << box[jj] << endl;
    //}
    //
    //cout << "=========" << endl;
    
    cout << sum << endl;
    
  }


  return 0;
}
