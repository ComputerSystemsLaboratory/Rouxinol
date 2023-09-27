#include <cstdio>
#include <iostream>
using namespace std;
int n,r;
int c[2][55];
int main(void){
  while(cin >> n >> r && n){
    for(int i = 0; i < n; i++) c[0][n-i-1] = i+1;
    for(int i = 0; i < r; i++){
      int a,b;
      cin >> a >> b;
      a--;
      for(int j = 0; j < b; j++)
	c[(i+1)%2][j] = c[i%2][a+j];
      for(int j = 0; j < a; j++)
	c[(i+1)%2][b+j] = c[i%2][j];
      for(int j = a+b; j < n; j++)
	c[(i+1)%2][j] = c[i%2][j];

      /*
      for(int j = 0; j < n; j++)
	cout << c[(i+1)%2][j] << " ";
      cout << endl;
      */
    }
    cout << c[r%2][0] << endl;
  }
}