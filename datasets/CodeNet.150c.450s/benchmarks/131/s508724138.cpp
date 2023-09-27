#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

long used[2000000];
long x[10];
long a,b,i,j,l;
bool flag;

void seperate (long a)
{
  long i,j,m;
  
  m=0;
  while (a!=0)
  {
    m++;
    x[m]=a % 10;
    a=a / 10;
    
    /*cout <<a<<endl;*/
  }
  
  m++;
  for (i=m;i<=l;i++) x[i]=0;
}

void doit(long a,long num)
{
  flag=false;
  while (flag==false)
  {
    seperate(a);
    
    for (i=1;i<=l;i++)
      for (j=i+1;j<=l;j++)
        if (x[i]<x[j]) swap(x[i],x[j]);
        
    int maxi,mini,temp;
    maxi=0;mini=0;
    
    for (i=1;i<=l;i++) maxi=maxi*10+x[i];
    for (i=l;i>=1;i--) mini=mini*10+x[i];
    temp=maxi-mini;
    
    if  (used[temp]!=-1) 
    {
      cout <<used[temp]<<" "<<temp<<" "<<num+1-used[temp]<<endl;
      flag=true;
      return;
    }  
    else
    {
      used[temp]=num+1;
      doit(temp,num+1);
    }  
  }
}
 
int main()
{
  while (true)
  {
    cin >>a>>l;
    if ((a==0)&&(l==0)) break;
    
    memset(used,-1,sizeof(used));
    used[a]=0;
    doit(a,0);
  }
  return 0;
}