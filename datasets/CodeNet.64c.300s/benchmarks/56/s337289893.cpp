#include<iostream>
using namespace std;
int main()
{
  int n;
  int y,m,d;
  cin>>n;
  while(cin>>y>>m>>d){
    int s=(y-1)*195 + (m-1)*19 + m/2 + d-1;
    s += ((y-1)/3)*5;
    if(y%3==0)s += (m-1)/2;
    cout<<196470-s<<endl;
  }
}