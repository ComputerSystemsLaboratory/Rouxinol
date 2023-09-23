#include <iostream>
using namespace std;
int main()
{
  int card[52];
  for(int i=0;i<52;i++)
    card[i]=0;

  int n;
  cin>>n;
  char s;
  int num;
  for(int i=0;i<n;i++)
  {
    cin>>s>>num;
    switch(s)
    {
      case 'S':
        card[num-1]=1;
        break;
      case 'H':
        card[13+num-1]=1;
        break;
      case 'C':
        card[26+num-1]=1;
        break;
      case 'D':
        card[39+num-1]=1;
        break;
    }
  }
for(int i=0;i<52;i++)
  {
    if(card[i]==0)
    {
      switch(i/13)
      {
        case 0:
          cout<<"S "<<i%13+1;break;
        case 1:
          cout<<"H "<<i%13+1;break;
        case 2:
          cout<<"C "<<i%13+1;break;
        case 3:
          cout<<"D "<<i%13+1;break;
      }
      cout<<endl;
    }
  }
}