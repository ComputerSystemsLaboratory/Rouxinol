#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  int Y[101]={0};
  int M[101]={0};
  int D[101]={0};
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    cin>>Y[i]>>M[i]>>D[i];
  }
  int premium=0;
  for(int i=1;i<=999;i++)
  {
    if(i%3!=0)
  {
    premium=premium+19*5+20*5;
  }else{
    premium=premium+20*10;
  }
  }
  premium++;
  int date[101]={0};
  for(int i=1;i<=n;i++)
  {
    for(int k=1;k<=Y[i]-1;k++)
    {
      if(k%3!=0)
      {
        date[i]=date[i]+19*5+20*5;
      }else{
        date[i]=date[i]+20*10;
      }
    }
    if(Y[i]%3!=0)
    {
      for(int l=1;l<=M[i]-1;l++)
      {
        if(l%2!=1)
        {
          date[i]=date[i]+19;
        }else{
          date[i]=date[i]+20;
        }
      }
    }else{
      for(int l=1;l<=M[i]-1;l++)
      {
        date[i]=date[i]+20;
      }
    }
    date[i]=date[i]+(D[i]);
  }
  for(int i=1;i<=n;i++)
  {
    cout<<premium-date[i]<<endl;
  }
  return 0;
}

