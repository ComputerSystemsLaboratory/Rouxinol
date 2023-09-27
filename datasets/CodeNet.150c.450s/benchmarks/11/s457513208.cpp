#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
using namespace std;


int main(void) {

  int n;
  cin >> n;
  vector< vector<int> > a(4, vector<int>(13, 0));
  for(int i=0; i<n; i++){
    char s;
    int tmp;
    cin >> s >> tmp;
    if( s == 'S' ) a[0][tmp-1]++;
    if( s == 'H' ) a[1][tmp-1]++;
    if( s == 'C' ) a[2][tmp-1]++;
    if( s == 'D' ) a[3][tmp-1]++;
  }

  for(int i=0; i<4; i++){
    for(int j=0; j<13; j++){
      if( a[i][j] == 0 ){
        if( i == 0 ) cout << 'S' << " " << j+1 << endl;
        if( i == 1 ) cout << 'H' << " " << j+1 << endl;
        if( i == 2 ) cout << 'C' << " " << j+1 << endl;
        if( i == 3 ) cout << 'D' << " " << j+1 << endl;
      }
    }
  }


  return 0;
}