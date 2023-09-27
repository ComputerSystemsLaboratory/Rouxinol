#include<iostream>
using namespace std;

int main()
{
  int array[100][100];
  int brray[100];
  int n,m;
  
  cin >> n >> m;

  int i,j;
  for(i=0;i<n;i++){
    for(j=0;j<m;j++)
      cin >> array[i][j];
  }
  for(i=0;i<m;i++)
    cin >> brray[i];

  int crray[100]={0};
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      crray[i] += array[i][j] * brray[j];
    }
    cout << crray[i] << endl;
  }
  return 0;
}