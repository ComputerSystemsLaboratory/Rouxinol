#include<iostream>
#include<algorithm>
using namespace std;

int main(){

  int w,h,a[100][100],n,x,y;

  while(cin >> w >> h, w, h){

    for(int i=0;i<=w;i++){
      for(int j=0;j<=h;j++) a[i][j] = 0;
    }

    a[0][1] = 1;
    cin >> n;

    for(int i=0;i<n;i++){
      cin >> x >> y;
      a[x][y] = -1;
    }

    for(int i=1;i<=w;i++){
      for(int j=1;j<=h;j++){

	if(a[i][j] != -1){

	  if(a[i-1][j] == -1) a[i][j] = a[i][j-1];
	  else if(a[i][j-1] == -1) a[i][j] = a[i-1][j];
	  else a[i][j] = a[i-1][j] + a[i][j-1];
	}

      }
    }

    cout << a[w][h] << endl;

  }

}