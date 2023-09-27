#include <iostream>
int main(){int N,A[60000],i=0,j=1,x=1,c=101;std::cin>>N;for(;i<N;i++)A[i]=0;for(;x<c;x++)for(int y=1;y<c;y++)for(int z=1;z<c;z++)A[x*x+y*y+z*z+x*y+y*z+z*x]++;for(;j<=N;j++)std::cout<<A[j]<<std::endl;}
