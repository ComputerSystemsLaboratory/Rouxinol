//?????????????????????????¨???????pair???????????¨???????????????????????£????????§31-179573????????????????????????????????????????????????????????????init(n)???????????????????????¨????°????????????????30?????????????????????????????£??????
#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;

int P[10010];
void init(int N){
  for (int i=0;i<=N;i++) P[i]=i;
}

int root(int a){
  if(P[a]==a) return a;
  return(P[a] = root(P[a]));
}

bool is_same_set(int a,int b){
  return root(a) == root(b);
}
void unite(int a,int b){
  P[root(a)] = root(b);
}

int main(){
  int n;
  cin>>n;
  init(n);
  int A[101][101];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin >> A[i][j];
    }
  }
  int cost[10010],src[10010],dst[10010];
  int M=0;
  for(int r=0;r<n;r++){
    for(int c=r+1;c<n;c++){
      if(A[r][c]>-1){
	cost[M]=A[r][c];
	src[M]=r;
	dst[M]=c;
	M+=1;
      }
    }
  }
  pair<int,int> edges[10010];
  for(int i=0;i<M;i++){
    edges[i] =make_pair(cost[i],i);
  }

  sort(edges,edges+M);
  int s=0;
  for(int i=0;i<M;i++){
    int k= edges[i].second;
    int p=src[k];
    int q=dst[k];
    if(is_same_set(p,q)) {
      continue;
    }
    unite(p,q);
    s+=edges[i].first;
  }
  cout << s<<endl;
}