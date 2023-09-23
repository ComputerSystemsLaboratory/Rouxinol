#include<iostream>
using namespace std;
int tax(int rate,int price_without_tax)
{
  int price_after_tax;
  price_after_tax=price_without_tax*(100+rate)/100;
  return price_after_tax;
}

int main()
{
  int maximum;
  int x,y,s;
  while(1)
  {
    maximum=0;
    cin>>x>>y>>s;
    if(x!=0&&y!=0&&s!=0)
    {
      for(int i=1;i<s;i++)
	{
	  for(int j=i;j<s;j++)
	    {
	      if(tax(x,i)+tax(x,j)==s)
		{
		  maximum=max(maximum,tax(y,i)+tax(y,j));
		}
	    }
	}
      cout<<maximum<<endl;
    }
    else
      break;
  }
}