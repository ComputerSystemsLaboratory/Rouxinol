#include<iostream>

using namespace std;

int x,y,s;
int tax(int x,int p)
{
  int t;
  t=p*(100+x)/100;
  return t;
}

int max(int m1,int m2)
{
  if(m1>=m2)
    return m1;
  else
    return m2;
}

int solve()
{
  int maxium=0;
  for(int i=1;i<s;i++)
    for(int j=i;j<s;j++)
      if(tax(x,i)+tax(x,j)==s)
	maxium=max(maxium,tax(y,i)+tax(y,j));
  return maxium;
  
}

int main()
{
  while(cin>>x>>y>>s&&x>0)
    {
      cout<<solve()<<endl;
    }
  return 0;
}