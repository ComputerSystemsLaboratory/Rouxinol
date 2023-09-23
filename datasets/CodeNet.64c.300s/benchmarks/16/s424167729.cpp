#include <iostream>
using namespace std;

int main(){
  int n;
  long int r[200000];
  long int maxv=-1000000000000;
  long int minv=1000000000000;

  cin >> n;
  for(int i=0; i<n; i++){
    cin >> r[i];
  }

  for(int i=0; i<n; i++){
    maxv = (maxv<(r[i]-minv))?(r[i]-minv):maxv;
    minv = (minv>r[i])?r[i]:minv;
  }
  cout << maxv << endl;
}

