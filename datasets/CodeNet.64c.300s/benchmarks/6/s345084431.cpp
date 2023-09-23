#include<iostream>

using namespace std;

int main(){
  int liver[4][3][10]={0};

  int n;
  int b,f,r,v;

  int i,j,k;
  cin >> n;
  for(i=0;i<n;i++){
    cin >> b >> f >> r >> v;
    liver[b-1][f-1][r-1] += v;
  }

  for(i=0;i<4;i++){
    for(j=0;j<3;j++){
      for(k=0;k<10;k++)
	cout << " " << liver[i][j][k];
      cout << endl;
    }
    if(i==3)
      break;
    cout << "####################" << endl;
  }
}