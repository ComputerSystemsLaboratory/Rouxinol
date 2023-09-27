#include <bits/stdc++.h>
using namespace std;int main(){int N,A[60000];cin>>N;for(int i=0;i<N;i++)A[i]=0;for(int x=1;x<101;x++)for(int y=1;y<101;y++)for(int z=1;z<101;z++)A[x*x+y*y+z*z+x*y+y*z+z*x-1]++;for(int i=0;i<N;i++)cout<<A[i]<<endl;}
