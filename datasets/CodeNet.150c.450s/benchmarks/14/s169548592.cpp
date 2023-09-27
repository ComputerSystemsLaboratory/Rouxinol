#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int i;
  int k;
  int j;
  for(i=1;i<=n;i++)
  {
      for(k=i;k/10>=10;)
      {
        k=k/10;
      }
        if(i%3==0 || k%10==3 || i%10==3|| i/100==3 ||i/1000==3 || i/10%10==3 || i/10==3){
      cout<<" "<<i;
    }
  }
  cout<<endl;
  return 0;
}

