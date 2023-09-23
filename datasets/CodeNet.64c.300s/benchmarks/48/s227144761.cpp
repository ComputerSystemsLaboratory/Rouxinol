#include<iostream>
using namespace std;
#define N 1000000
bool p[1000000];
int main(){
  int n;

  for(int i=0;i<N;i++)p[i]=true;
  p[0]=p[1]=false;
  for(int i=0;i<N;i++)
    if(p[i]==true)
      for(int j=i*2;j<N;j+=i)
	p[j]=false;

  while(cin>>n){
    int count=0;
    for(int i=0;i<=n;i++)
      if(p[i]==true)count++;
    cout<<count<<endl;
  }
  return 0;
}