#include <iostream>
using namespace std;

int main()
{
  int m,f,r;
  cin >> m >> f >> r;
  int sum;
  char x[100]={};
  int i=0;
  while(!(m==-1&&f==-1&&r==-1))
    {
      sum=m+f;
      if(m==-1||f==-1)x[i]='F';
      else{
	if(sum>=80)x[i]='A';
	else if(sum>=65)x[i]='B';
	else if(sum>=50)x[i]='C';
      else if(sum>=30)
	{if(r>=50)x[i]='C';
	  else x[i]='D';}
      else x[i]='F';
      }
      cin >> m >> f >> r;
      i++;
    }

  for(int j=0;j<i;j++)
    {
      cout << x[j] << endl;
    }


  return 0;
}