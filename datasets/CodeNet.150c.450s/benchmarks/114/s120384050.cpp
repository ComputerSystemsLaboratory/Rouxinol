#if 0
AOJ??????accepted??????????????????
???????????????60??????????????§?????????

pair???????????????????????¨
????????¨?????????pair?????????????????????????????¨?????????????????????????????????
#endif

#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int P[10010];
void init(int N){//?????????
  for (int i=0; i<=N; ++i)
    P[i]=i;
}

int root(int a){//a???root????±???????
  if(P[a]==a)
    return a;
  return (P[a]=root(P[a]));
}

bool is_same_set(int a,int b){//??????set?????????
  return root(a)==root(b);
}

void unite(int a,int b){
  P[root(a)]=root(b);
}

int main(){
  int N;
  cin>>N;
  int A[N][N];
  
  for(int i=0; i<N;i++){//????????????
    for(int j=0;j<N;j++){
      cin>>A[j][i];
    }
  }

  int M = 0; // ????????????????????°
  int num=N*N;
  int cost[num];
  int src[num],dst[num];
  for (int r=0; r<N;r++){
    for (int c=0; c<r;c++){
      if (A[r][c] > -1) {
	cost[M] = A[r][c];
	src[M] = r;
	dst[M] = c;
	M += 1;
      }
    }
  }

  pair<int,int> edge[100000];//?§??????????????????¢????????????
  for(int i=0; i<M;i++){
    edge[i]=make_pair(cost[i],i);
  }
  sort(edge,edge+M);

  int edges[M][3];
  for(int i=0; i<M;i++){//?????????????????????
    edges[i][0]=edge[i].first;
    edges[i][1]=src[edge[i].second];
    edges[i][2]=dst[edge[i].second];
  }
  /*
  check!
  for(int i=0; i<M;i++){
    cout<<"news cost="<<edges[i][0]<<" ,"<<edges[i][1]<<"-"<<edges[i][2]<<endl;
  }
  */




  init(N);
  int sum=0;
  for(int i=0; i<M;i++){//???????????????????????????
    if(is_same_set(edges[i][1],edges[i][2])==0){
      unite(edges[i][1],edges[i][2]);
      sum=sum+edges[i][0];
    }
  }
    cout<<sum<<endl;
}