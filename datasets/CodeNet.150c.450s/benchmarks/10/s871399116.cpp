#include <iostream>
using namespace std;

void pri(){
  for(int i=0; i<20; i++) cout <<"#";
  cout << endl;
}

int main(){

  int n; cin >> n;
  int m[5][4][11]={};
  for(int i=0; i<n; i++){
    int b,f,r,v;
    cin  >> b >> f >> r >> v;
    m[b][f][r] += v;
  }
  for(int i=1; i<5; i++){
    for(int j=1; j<4; j++){
      for(int k=1; k<11; k++){
	cout << " " << m[i][j][k];
      }
      cout << endl;
    }
    if(i!=4)
      pri();
  }

}