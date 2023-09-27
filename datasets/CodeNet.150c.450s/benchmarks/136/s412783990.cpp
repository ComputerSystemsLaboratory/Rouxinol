#include<iostream>
#include<cstdio>
#include<utility>
using namespace std;
int main()
{
  long long int n=0,m=0;
  long long int i=0,j=0,l=0;

  while(scanf("%d %d",&n,&m) != EOF)
    {
      i = n;
      j = m;

      //koyaku
      if((n >= m) != true)swap(n,m);
      while(1)
	{
	  int amari = n % m;
	  n = m;
	  m = amari;
	  if(amari == 0) break;
	}
      
      //kobai
      l = i*j/n;
      
      cout << n << " " << l << endl;
    }
}