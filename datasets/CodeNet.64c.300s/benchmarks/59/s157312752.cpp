#include<iostream>
using namespace std;

int judge(int n)
{
  if(n<2)return 0;
  if(n==2)return 1;
  if(n%2==0)return 0;
  for(int i=3;i<=n/i;i+=2){
    if(n%i==0)return 0;
  }
  return 1;
}

int main()
{
  int n,m,sum=0;

  cin>>n;
  for(int i=0;i<n;i++){
    cin>>m;
    sum+=judge(m);
  }
  cout<<sum<<endl;
  return 0;
}