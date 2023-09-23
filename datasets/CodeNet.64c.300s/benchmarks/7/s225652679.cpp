#include <iostream>
#include<string>

using namespace std;

int main()
{
  int i;
  int j;
  int n;
  int card [4][13]={0};
  char mark;
  int num;
  
  cin >> n;
  for(i=0;i<n;i++)
  {
    cin >> mark >> num;
    if(mark=='S')
      card[0][num-1]=1;
    if(mark=='H')
      card[1][num-1]=1;
    if(mark=='C')
      card[2][num-1]=1;
    if(mark=='D')
      card[3][num-1]=1;
  }
  for(i=0;i<4;i++)
  {
    for(j=0;j<13;j++)
    {
    if(card[i][j]==0)
      {
      if(i==0)
        cout << "S " << j+1 <<"\n";
      if(i==1)
        cout << "H " << j+1 <<"\n";
      if(i==2)
        cout << "C " << j+1 <<"\n";
      if(i==3)
        cout << "D " << j+1 <<"\n";
      }
    }
  }
}