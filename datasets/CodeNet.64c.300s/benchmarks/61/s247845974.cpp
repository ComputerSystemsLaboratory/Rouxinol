#include <iostream>
using namespace std;

int main()
{
  int r,c,e[100][100];
  int i,j;
  int sum1,sum2[100],sum3;
  cin >> r >> c;
  sum3=0;
  
  for(i=0;i<r;i++){
    sum1=0;
    for(j=0;j<c;j++){
      if(i==0){
	sum2[j]=0;
      }
      cin >> e[i][j];
      sum1=sum1+e[i][j];
      sum2[j]=sum2[j]+e[i][j];
      cout << e[i][j] << " ";
    }
    cout << sum1 <<endl;
  }
  
  for(int k=0;k<c;k++){
    cout << sum2[k] << " ";
    sum3=sum3+sum2[k];
  }
  cout << sum3 << endl;
  
  return 0;
}