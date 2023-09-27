#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
#include<map>
#include<stack>
#include<queue>
#include<list>
using namespace std;
int inf = 1000000000;

int main(void) {

  int n;
  cin >> n;
  while(n != 0){
    n--;
    int l = 0;
    int r = 0;
    int tmp;
    bool f = true;
    for(int i=0; i<10; i++){
      cin >> tmp;
      if( l < tmp ) l = tmp;
      else if( r < tmp ) r = tmp;
      else f = false;
    }
    cout << ( f ? "YES" : "NO" ) << endl;
  }


  return 0;
}


// EOF