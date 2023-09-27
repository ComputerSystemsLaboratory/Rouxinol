
#include<iostream>
#include<map>
using namespace std;

int main()
{
  map<int,int> m;
  map<int,int>::iterator it;
  int n;
  for(n=1;n<=30;n++)m[n]=1;
  while(cin>>n)m.erase(n);
  for(it=m.begin();it!=m.end();it++)cout<<(*it).first<<endl;
}