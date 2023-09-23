#include<iostream>
#include<vector>
#include<algorithm>

#define INF (1<<29)

using namespace std;



int main(void){

  int a,b,c,g[10][10],n,sum[10];

  while(cin >> n,n){
    fill(sum,sum+10,0);
    fill(g[0],g[10],INF);

    for(int i=0;i<10;i++)g[i][i]=0;

    for(int i=0;i<n;i++){
      cin >> a >> b >> c;
      g[a][b]=g[b][a]=c;
    }

    for(int k=0;k<10;k++){
      for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
          g[i][j]=min(g[i][j],g[i][k]+g[k][j]);
        }
      }
    }

    for(int i=0;i<10;i++)
      for(int j=0;j<10;j++)
        if(g[i][j]<INF)sum[i]+=g[i][j];

    int ans1=INF,ans2=0;
    for(int i=0;i<10;i++)
      if(ans1>sum[i] && sum[i]>0)ans1=sum[i],ans2=i;

    cout << ans2 << " " << ans1 << endl;
  }


  return 0;
}