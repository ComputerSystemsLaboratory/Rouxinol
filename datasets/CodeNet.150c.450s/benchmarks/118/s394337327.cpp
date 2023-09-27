#include<iostream>
using namespace std;

int data[1111][12][22];

int main(){

  int cnt = 0;
  for(int i=1;i<1111;i++){
    for(int j=1;j<11;j++){
      for(int k=1;k<21;k++){
	if(k == 20 && i%3 && !(j%2)) break;
	cnt++;
	data[i][j][k] = cnt;
      }
    }
  }

  int n, y, m, d;
  cin >> n;

  for(int i=0;i<n;i++){
    cin >> y >> m >> d;
    cout << data[1000][1][1] - data[y][m][d] << endl;
  }

}