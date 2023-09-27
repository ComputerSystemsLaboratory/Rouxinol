#include<iostream>
using namespace std;

int main()
{
  int N,sum,ii,sumN;
  while(1){
    cin>>N;
    if(N==0)break;
    sum=0;
    ii=0;
    sumN=0;
    for(int i=1;i<N;++i){
      sumN+=i;
      ii+=1;
      if(sumN==N){
        sum++;
        sumN=0;
        i-=ii-1;
	ii=0;
      }
      if(sumN>N){
        sumN=0;
        i-=ii-1;
        ii=0;
      }
    }
    cout<< sum<<endl;
  }
  return 0;
}