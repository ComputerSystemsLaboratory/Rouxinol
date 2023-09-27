#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long LL;
const LL maxn=1e4;
struct node{
  int p,l,r;
};
node T[maxn];
void preOrder(int n){
  if(n==-1) return;
  printf(" %d",n);
  preOrder(T[n].l);
  preOrder(T[n].r);
}
void inOrder(int n){
  if(n==-1) return;
  inOrder(T[n].l);
  printf(" %d",n);
  inOrder(T[n].r);
}
void PostOrder(int n){
  if(n==-1) return;
  PostOrder(T[n].l);
  PostOrder(T[n].r);
  printf(" %d",n);
}
int main()
{
  int N, v, l, r, root;
  scanf("%d",&N);
  for(int i = 0; i <= N; i++) T[i].p=-1;
  for(int i = 0; i < N; i++){
    scanf("%d%d%d",&v,&l,&r);
    T[v].l = l, T[v].r = r;
    if(l!=-1) T[l].p = v;
    if(r!=-1) T[r].p = v;
  }
  for(int i = 0; i < N; i++)
    if(T[i].p==-1)//找到根节点
      root = i;
  printf("Preorder\n");
  preOrder(root);
  printf("\nInorder\n");
  inOrder(root);
  printf("\nPostorder\n");
  PostOrder(root);
  printf("\n");
  return 0;
}

