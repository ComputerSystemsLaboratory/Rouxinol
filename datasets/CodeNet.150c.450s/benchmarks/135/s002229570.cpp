#include<iostream>
#define K 1000000
using namespace std;
int h[K],w[K],n,m,i,j,p[1500],k;
int main(){
  while(1){
    for(i=1;i<K;i++)h[i]=0,w[i]=0;
    cin>>n>>m;if(n==0&&m==0)break;
    for(i=0;i<n;i++){
      cin>>p[i];
      for(j=i,k=0;j>=0;j--,k+=p[j])h[p[i]+k]++;
    }
    for(i=0;i<m;i++){
      cin>>p[i];
      for(j=i,k=0;j>=0;j--,k+=p[j])w[p[i]+k]++;
    }
    n=0;
    for(i=1;i<K;i++)n+=h[i]*w[i];
    cout<<n<<endl;
  }
  return 0;
}