#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <bitset>
#include <cstring>
#include <deque>
#include <iomanip>
#include <limits>
#include <fstream>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define CLR(mat) memset(mat, 0, sizeof(mat))
typedef long long ll;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin>>n;
  int data[n+1];
  FOR(i,0,n){
    cin>>data[i+1];
  }
  FOR(i,1,n+1){
    cout << "node " << i << ": ";
    cout << "key = " << data[i] << ", ";
    if(i != 1) cout << "parent key = " << data[i/2] << ", ";
    if(i * 2 <= n) cout << "left key = " << data[i*2] << ", ";
    if(i * 2 + 1 <= n) cout << "right key = " << data[i*2+1] << ", ";
    cout << endl;
  }
}
