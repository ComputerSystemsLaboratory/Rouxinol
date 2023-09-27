#include<iostream>
#include<string>
using namespace std;

int main(){
  int i,j,n,c[1001][1001];
  string x,y;
  cin >> n;
  while(n>0){
    n--;
    cin >> x;
    cin >> y;

    int lenx = x.size();
    int leny = y.size();

    for(i = 1; i <= lenx; i++){
      c[i][0] = 0;
    }
    for(j = 1; j <= leny; j++){
      c[0][j] = 0;
    }
  
    for(i = 1; i <= lenx; i++){
      for(j = 1; j <= leny; j++){
	if(x[i-1]==y[j-1]){
	  c[i][j] = c[i-1][j-1] + 1;
	}else if(c[i-1][j] >= c[i][j-1]){
	  c[i][j] = c[i-1][j];
	}else{
	  c[i][j] = c[i][j-1];
	}
      }
    }
    cout << c[lenx][leny] << endl;
  }
  return 0;
}