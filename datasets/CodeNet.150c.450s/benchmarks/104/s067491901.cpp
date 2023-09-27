 #include<iostream>
#include<cstdio>
using namespace std;
int main()
{
  int w,n,i,r,l,tmp,res[31];
  for(i=1;i<=30;i++)
      res[i]=i;
  cin >> w;
  cin >> n;
  for(i=0;i<n;i++)
  {
    scanf("%d,%d",&l,&r);
    tmp=res[l];
    res[l]=res[r];
    res[r]=tmp;
  }
  for(i=1;i<=w;i++)
    cout << res[i] << endl;
  return 0;
}
  