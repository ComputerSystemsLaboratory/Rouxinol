#include<iostream>
using namespace std;
int main()
{
  int n,p,pp;
  int N[50];
  while(1){
    cin>>n;
    cin>>p;
    if(n==0 && p==0)break;
    pp=p;
    for(int i=0;i<50;++i)N[i]=0;
    for(int i=0;;i++){
      if(pp > 0){
	++N[i%n];
	--pp;
      }
      else{
	pp += N[i%n];
	N[i%n] = 0;
      }
      if(N[i%n] == p){
	cout << i%n << endl;
	break;
      }
    }
  }
  return 0;
}