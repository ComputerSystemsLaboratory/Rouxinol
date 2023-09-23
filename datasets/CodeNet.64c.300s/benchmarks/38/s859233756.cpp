#include<cstdio>
#include<iostream>
using namespace std;

int a[10],b[10],c[10];

void initial()
{
	for(int i=0;i<10;i++)
	{
		b[i]=-1;
        c[i]=-1;
	}
}
bool judge()
{
  int p=0,q=0,i;
  initial();
  b[0]=a[0];
  for(i=1;i<10;i++)
  {
	  if(a[i]>b[p])b[++p]=a[i];
	  else if(q==0)c[q++]=a[i];
	  else if(a[i]>c[q-1])c[q++]=a[i];
	  else 
	  {
		  return false;
		  break;
	  }
  }
  if(i==10)
	  return true;
}

int main()
{
	int num;
	cin>>num;
	while(num--)
	{
		for(int i=0;i<10;i++)
			cin>>a[i];
		puts(judge()?"YES":"NO");
	}
return 0;
}