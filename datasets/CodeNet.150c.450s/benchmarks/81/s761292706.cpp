
//ダイクストラにて。
#include <cstdio>
#include <cstring>
#include <queue>
#include <map>
#include <functional>
using namespace std;
//int INF = 1 << 24;

int mins(int p,int q){
  if(p<0)return q;
  else if(q<0 || p<q)return p;
  else return q;
}
int n,i,j;
int a,b,c;
int ari,man;
int lo,no,tai,mi;
typedef pair<int,int> mp;
mp pa;
int mati[10][11][2];
int daiyo[11][2];
//mati[i][0][0]に辺の数
//daiyo[i][0]は確認フラグ
//mati[i][n][0]に先の街
//mati[i][n][1]に距離
//daiyo[i][1]は距離
int main(void){
  scanf("%d",&n);
  while(n!=0){
    memset(mati,0,sizeof(mati));
    man=0;
    for(i=0;i<n;i++){
      scanf("%d%d%d",&a,&b,&c);
      mati[a][0][0]++;
      mati[a][mati[a][0][0]][0]=b;
      mati[a][mati[a][0][0]][1]=c;
      mati[b][0][0]++;
      mati[b][mati[b][0][0]][0]=a;
      mati[b][mati[b][0][0]][1]=c;
      man=(man<a)?a:man;
      man=(man<b)?b:man;
    }
    //mati[i][0][0]に辺の数
    //daiyo[i][0]は確認フラグ
    //mati[i][n][0]に先の街
    //mati[i][n][1]に距離
    //daiyo[i][1]は距離
    int ans=-1;
    int saima=-1;
    for(i=0;i<=man;i++){
      memset(daiyo,-1,sizeof(daiyo));
      priority_queue<mp,vector<mp>,greater<mp> > que;
      que.push(make_pair(0,i));
      daiyo[i][1]=0;
      while(!(que.empty())){
	pa=que.top();
	que.pop();
	no=pa.second;
	if(daiyo[no][0]==-1){
	  lo=pa.first;
	  for(j=1;j<=mati[no][0][0];j++){
	    tai=mati[no][j][0];
	    mi=mati[no][j][1];
	    daiyo[tai][1]=mins(daiyo[tai][1],lo+mi);
	    //printf("%d%d",daiyo[tai][1],lo+mi);
	    que.push(make_pair(daiyo[tai][1],tai));
	  }
	  daiyo[no][0]=1;
	}
      }
      int taans=0;
      for(j=0;j<=man;j++){
	taans+=daiyo[j][1];
      }
      if(ans==-1 || taans<ans){
	ans=taans;
	saima=i;
      }
      //printf("%d %d %d\n",daiyo[0][1],daiyo[1][1],taans);
    }
    printf("%d %d\n",saima,ans);
    scanf("%d",&n);
  }
  return 0;
}