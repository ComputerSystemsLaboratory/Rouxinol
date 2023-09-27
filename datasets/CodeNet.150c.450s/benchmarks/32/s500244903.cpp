#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int m,nmax,nmin,p[200],n,maxn;
  while(1){
    cin>> m>>nmin>>nmax;
    if(m==0&&nmax==0&&nmin==0)
      break;
    for(int i=0;i<m;i++)
      cin>>p[i];
    maxn=0;
    for(int i=nmin;i<=nmax;i++)
      if(maxn<=p[i-1]-p[i]){
        maxn=p[i-1]-p[i];
        n=i;
      }
    cout<<n<<endl;
  }
}
