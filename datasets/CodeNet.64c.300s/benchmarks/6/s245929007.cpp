#include<iostream>
using namespace std;

int main () {
  int residents[4][3][10]={ 0 };
  int n,b,f,r,v,buildings=4,floors=3,rooms=10;
  cin >> n;
  for (int i=0;i<n;++i) {
    cin >> b >> f >> r >> v;
	residents[b-1][f-1][r-1] = residents[b-1][f-1][r-1] + v;
  }

  for (int j=0;j<buildings;++j) {
    for (int k=0;k<floors;++k) {
	  for (int l=0;l<rooms;++l) {
	  cout << " " << residents[j][k][l];
      }
	  cout << endl;
    }
	if (j != buildings-1)cout << "####################" << endl;
  }
  return 0;
}