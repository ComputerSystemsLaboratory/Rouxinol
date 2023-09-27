#include <cstdio>
#define REP(i,n) for(int i=0;i<n;i++)
#define REPR(i,n) for(int i=n-1;i>=0;i--)
#define llong long long
#define IFY 2000000000
#define MAX 10000
#define NIL -1
using namespace std;
struct Node{int parent,left,right;};
Node T[MAX];
int n;
void preparse(int u){
  if(u==NIL) return;
  printf(" %d",u);
  preparse(T[u].left);
  preparse(T[u].right);
}
void inparse(int u){
  if(u==NIL) return;
  inparse(T[u].left);
  printf(" %d",u);
  inparse(T[u].right);
}
void postparse(int u){
  if(u==NIL) return;
  postparse(T[u].left);
  postparse(T[u].right);
  printf(" %d",u);
}
int main(){
  int root=0,v,left,right;
  scanf("%d",&n);
  REP(i,n) T[i].parent=NIL;
  REP(i,n){
    scanf("%d %d %d",&v,&left,&right);
    T[v].left=left;
    T[v].right=right;
    if(left!=NIL) T[left].parent=v;
    if(right!=NIL) T[right].parent=v;
  }
  REP(i,n) if(T[i].parent==NIL) root=i;
  printf("Preorder\n");
  preparse(root);
  printf("\n");
  printf("Inorder\n");
  inparse(root);
  printf("\n");
  printf("Postorder\n");
  postparse(root);
  printf("\n");
  return 0;
}