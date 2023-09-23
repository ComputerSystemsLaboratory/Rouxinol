#include<iostream>
using namespace std;

int main()
{
  int n;
  int check[4][3][10]={0};

  cin >> n;

  int i,a,b,c,d;
  for(i=0;i<n;i++){
    cin >> a >> b >> c >> d;
    check[a-1][b-1][c-1] += d;
  }

  for(i=0;i<4;i++){
    for(int j=0;j<3;j++){
      for(int k=0;k<10;k++)
	cout << " " << check[i][j][k];
      cout << endl;
    }
    if(i!=3){
      for(int l=0;l<20;l++)
	cout << "#";
      cout << endl;
    }
  }
  
  return 0;
}