#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<map>
#include<queue>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
#include<random>
using namespace std;

int main(){

  vector<int> a(4);
  vector<int> b(4);
  while(cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]){

    vector<int> n(10, 0);
    int hit = 0;
    int blow = 0;
    for(int i=0; i<4; i++){
      if( a[i] == b[i] ){
        hit++;
        n[ a[i] ]--;
      }
    }

    for(int i=0; i<4; i++){
      n[ a[i] ]++;
      n[ b[i] ]++;
    }
    for(int i=0; i<10; i++){
      if( n[i] == 2 ) blow++;
    }

    cout << hit << " " << blow << endl;
  }

  return 0;
}




// EOF