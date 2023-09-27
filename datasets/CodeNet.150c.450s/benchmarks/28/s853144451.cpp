/*
* Note: This template uses some c++11 functions , so you have to compile it with c++11 flag.
*       Example:-   $ g++ -std=c++11 c++Template.cpp
*
* Author : Akshay Pratap Singh
* Handle: code_crack_01
*
*/
 
/********   All Required Header Files ********/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

/*******  All Required define Pre-Processors and typedef Constants *******/
#define SCD(t) scanf("%d",&t)
#define SCLD(t) scanf("%ld",&t)
#define SCLLD(t) scanf("%lld",&t)
#define SCC(t) scanf("%c",&t)
#define SCS(t) scanf("%s",t)
#define SCF(t) scanf("%f",&t)
#define SCLF(t) scanf("%lf",&t)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for(int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for(int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert( B <= A && A <= C)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()
typedef long long int ll;
typedef unsigned long long int  ull;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<ll> vll;
typedef vector<vi> vvi;

int main(){

  int n, k, w;
  SCD(n); SCD(k);
  
  vll ws(n);
  SCD(w);
  ws[0] = w;
  for(int i=1; i<n; ++i){
    SCD(w);
    ws[i]=ws[i-1]+w;
  }


  int ans;
  ll pl=0; ll pr=10000000000;
  while( pr-pl > 1 ){
    ll pm=(pl+pr)/2;

    ll __k = 1;
    ll __w = pm;
    for(int i=1; i<n; ++i){
      if( ws[i]-ws[i-1] > pm ){ __k=k+1; break; }
      if( __w < ws[i] ){
        __k++;
        __w = ws[i-1]+pm;
      }
    }

//    cout << pm << " " << __k << " " << __w << endl;

    if( __k <= k ){ pr = pm; ans = pm; }
    else pl = pm;

  }

  cout << ans << endl;

//  for(int p=ws[0]; ; ++p){
//    int __k = 1;
//    int __w = p;
//    bool isend = true;
//
//    auto itr = upper_bound(ws.begin(), ws.end(), __w);
//    while( itr != ws.end() ){
//      __w = *(itr-1) + p;
//      auto itr_next = upper_bound(ws.begin(), ws.end(), __w);
////      cout << *itr_next << " ";
//      if( itr_next == itr ) { isend = false; break;}
//      itr = itr_next;
//      __k++;
//    }
////    cout << endl;
//
////    cout << p << " " << __k << " " << k << endl;
//    if( isend and __k <= k ) { ans = p; break; }
//  }
//

  return 0;
}

