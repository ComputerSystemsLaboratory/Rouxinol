#include<iostream>
#include<vector>

using namespace std;
vector<int> fib(50);

int makefib(int n){
  if(n==0||n==1) return fib[n]=1;
  if(fib[n]!=-1) return fib[n];
  else return fib[n]=makefib(n-1)+makefib(n-2);
}
		  
int a;
int main(void){
  cin>>a;
  for (int i=0; i<50; i++) fib[i]=-1;
  cout<<makefib(a)<<endl;
  return 0;
}