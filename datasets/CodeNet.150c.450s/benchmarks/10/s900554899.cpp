#include <iostream>
#include<string>

using namespace std;

int main()
{
  int n;
  int b;
  int f;
  int r;
  int v;
  int count[4][3][10]={0};
  int i;
  int j;
  int k;
  
  cin >> n;
  
  for(i=0;i<n;i++)
  {
    cin >> b >> f >> r >>v;
    count[b-1][f-1][r-1]+=v;
  }
  for(i=0;i<4;i++)
  {
    for(j=0;j<3;j++)
    {
      for(k=0;k<10;k++)
      {
        cout << " " << count[i][j][k];
      }
      cout <<"\n";
    }
    if(i==3)
      break;
    cout <<"####################\n";
  }
}