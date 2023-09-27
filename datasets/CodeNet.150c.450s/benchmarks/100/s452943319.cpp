#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
    long long c=1;
    if(n==0)c=0;
    else
      for(int i=n;i>0;i--)
	c*=i;
    cout<<c<<endl;


  return 0;
}