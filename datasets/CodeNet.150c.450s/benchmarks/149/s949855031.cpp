#include<cstdio>
#include<string>
using namespace std;

int P[10010];
void init(int N){
  for(int i=0;i<N;i++){
    P[i]=i;
  }
}
int root(int a){
  if(P[a]==a) return a;
  return (P[a]=root(P[a]));
}
bool is_same_set(int a,int b){
  return root(a)==root(b);
}
void unite(int a,int b){
  P[root(a)]=root(b);
}

int main(){
  int n,q;
  scanf("%d%d",&n,&q);
  init(n);
  for(int i=0;i<q;i++){
    int com;
    int x;
    int y;
    scanf("%d %d %d",&com,&x,&y);
    if(com){
      if(is_same_set(x,y)){
	printf("1\n");
      }else{
	printf("0\n");
      }
    }else{
      unite(x,y);
    }
  }
  return 0;
}
	      
		    