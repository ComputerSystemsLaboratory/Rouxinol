#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  int m[10];
  for(int i=0;i<10;i++){
    cin>>m[i];
    m[i]=-m[i];
  }
  sort(m,m+10);
  for(int i=0;i<3;i++)cout<<-m[i]<<endl;
  return 0;
}