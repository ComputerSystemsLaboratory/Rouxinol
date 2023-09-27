//
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int f(int n)
{
  switch(n){
  case 1:
    return 1;
    break;
  case 2:
    return 2;
    break;
  case 3:
    return 4;
    break;
  default:
    int a[30];
    a[0]=1;
    a[1]=2;
    a[2]=4;
    for(int i=3;i<n;++i){
      a[i]=a[i-1]+a[i-2]+a[i-3];
    }
    return a[n-1];
    break;
  }
}

int tenjyou(double n)
{
  if(n==(int)n){
    return (int) n;
  }else{
    return (int) n+1;
  }
}

int main()
{
  int n;
  int m=0;
  vector<int> answer;
  while(cin>>n&&n>0){
    double day,year;
    day=tenjyou(f(n)/10.0);
    year=tenjyou(day/365.0);
    answer.push_back(year);
    m+=1;
  }
  for(int i=0;i<m;++i){
    cout<<answer[i]<<endl;
  }
}