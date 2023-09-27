#include<iostream>
using namespace std;

int main()
{

  int n;
  int b,f,r,v;
  int sum[4][3][10];

  for(int i=0; i<4; i++)
    for(int j=0; j<3; j++)
      for(int k=0; k<10; k++)
	sum[i][j][k] = 0;


  cin >> n;

  for(int i=0; i<n; i++){
    cin >> b >> f >> r >> v;

    sum[b-1][f-1][r-1] += v;
  }


  for(int j=0; j<3; j++){
    for(int k=0; k<10; k++)
      cout << ' ' << sum[0][j][k];

    cout << endl;

  }

  for(int i=1; i<4; i++){

    cout << "####################" << endl;

    for(int j=0; j<3; j++){
      for(int k=0; k<10; k++)
	cout << ' ' << sum[i][j][k];

      cout << endl;
    }
    
  }

 
  return 0;
      
}