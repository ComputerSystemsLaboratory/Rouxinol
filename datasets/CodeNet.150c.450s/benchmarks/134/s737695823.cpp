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

#define MAX 100005
#define NIL -1

struct Node{ int p, l, r; };
Node T[MAX];
int n, H[MAX], D[MAX];

int order(int u, int t){
  if( t == 1 ) cout << " " << u;
  if( T[u].l != NIL )  order(T[u].l, t);
  if( t == 2 ) cout << " " << u;
  if( T[u].r != NIL ) order(T[u].r, t);
  if( t == 3 ) cout << " " << u;
  return 0;
}


int main(){
  int id, l, r;

  int N; SCD(N);
  REP(i, N) T[i].p = T[i].l = T[i].r = NIL;

  REP(i, N){
    SCD(id); SCD(T[id].l); SCD(T[id].r);
    T[T[id].l].p = id;
    T[T[id].r].p = id;
  }

  REP(i, N){
    if ( T[i].p == NIL ) r = i;
  }

  cout << "Preorder" << endl;
  order(r, 1);
  cout << endl;

  cout << "Inorder" << endl;
  order(r, 2);
  cout << endl;

  cout << "Postorder" << endl;
  order(r, 3);
  cout << endl;

  return 0;
}

