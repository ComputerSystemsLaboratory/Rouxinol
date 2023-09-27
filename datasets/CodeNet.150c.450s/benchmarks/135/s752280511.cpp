#include<cstdio>
#include<algorithm>
#include<iostream>
#include<string.h>

using namespace std;

int N,M;
int h[2000],w[2000];
int a[1000000],b[1000000];

void init(void){
  for(int i=0;i<2000;i++){
    h[i]=0;
    w[i]=0;
  }
  for(int i=0;i<1000000;i++){
    a[i]=0;
    b[i]=0;
  }

}

int main(){
  while(1){
    init();
    scanf("%d%d",&N,&M);
    if(N==0 && M==0) break;
    for(int i=0;i<N;i++)
      scanf("%d",&h[i]);
    for(int i=0;i<M;i++)
      scanf("%d",&w[i]);

    for(int i=0;i<=N;i++){
      for(int j=0;j<=N;j++){
        if(i!=j){
          int tmp=0;
          for(int k=i;k<j;k++){
            tmp+=h[k];
          }
          a[tmp]++;
        }
      }
    }
    for(int i=0;i<=M;i++){
      for(int j=0;j<=M;j++){
        if(i!=j){
          int tmp=0;
          for(int k=i;k<j;k++){
            tmp+=w[k];
          }
          b[tmp]++;
        }
      }
    }
    //cout << "a[1]:" << a[1] << endl;
    //cout << "a[4]:" << a[4] << endl;
    //cout << "a[6]:" << a[6] << endl;

    int ans=0;
    for(int i=1;i<1000000;i++){
      if(a[i]!=0 && b[i]!=0)
        ans+=a[i]*b[i];
    }

    printf("%d\n",ans);

  }
  return 0;

}