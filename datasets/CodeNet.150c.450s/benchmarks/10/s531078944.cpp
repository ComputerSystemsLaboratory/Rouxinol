#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n, a,b,c,d;
  vector<vector<vector<int> > > bld(4,vector<vector<int> >(3, vector<int>(10)));
  cin >> n;
  while(n--){
    cin >> a >> b >> c >> d;
    bld[a-1][b-1][c-1] += d;
  }

  for(int i=0; i<4; i++){
    for(int j=0; j<3; j++){
      for(int k=0; k<10; k++){
	cout << " " << bld[i][j][k];
      }
      cout << endl;
    }
    if(i!=3)
      cout << "####################" << endl;
  }

  return 0;
}