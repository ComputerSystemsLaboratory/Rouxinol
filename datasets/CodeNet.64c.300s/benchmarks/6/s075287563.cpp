#include<iostream>
using namespace std;

int main() {

  int n, i, b, f, r, v, count=0;
  int house[5][4][11] = {};

  cin >> n;

  for(i = 0; i < n; i++){
    cin >> b >> f >> r >> v;
    house[b][f][r] += v;
  }

  
  for(b = 1; b <= 4; b++){
    for(f = 1; f <= 3; f++){
      for(r = 1; r <= 10; r++){
	cout << " " << house[b][f][r];
      }
      cout << endl;
    }
    if(count < 3) cout << "####################" << endl;
    count++;
  }

  return 0;
  
}