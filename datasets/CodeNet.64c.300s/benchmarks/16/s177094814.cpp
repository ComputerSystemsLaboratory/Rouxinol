#include <iostream>
using namespace std;

int main()
{
  int n;
  int i,j;
  int *p;
  int max = -1000000000;
  int min;

  cin >> n;
  p = new int [n];

  for(i=0;i<n;i++){
    cin >> p[i];
  }

  min =	p[0];
  for( j=1; j<n; j++ ){
    if(max < p[j]-min){
      max = p[j] - min;
    }
    if(min > p[j]){
      min = p[j];
    }
  }

  cout << max << endl;

  delete [] p;
  return 0;
}