#include<iostream>
using namespace std;

int main(){

  int n,m,l;
  short a[100][100];
  int b;
  long int c[100][100];

  cin >> n >> m >> l;

  for(int i=0; i<n; i++)
    for(int j=0; j<l; j++)
      c[i][j]=0;

  for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)
      cin >> a[i][j];


  for(int i=0; i<m; i++){
    for(int j=0; j<l; j++){
      cin >> b;
      for(int s=0; s<n; s++)
	c[s][j] += b*a[s][i];

    }
  }

  for(int i=0; i<n; i++){
    cout << c[i][0];
    for(int j=1; j<l; j++)
      cout << " " << c[i][j];

    cout << endl;
  }


  return 0;
}