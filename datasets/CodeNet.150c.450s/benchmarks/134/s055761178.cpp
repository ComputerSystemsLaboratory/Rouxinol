#include <stdio.h>
#define N 100000
#define NIL -1
void preorder(int);
void inorder(int);
void postorder(int);
struct Node {
  int parent;
  int left;
  int right;
};

struct Node T[N];
int n;

int main()
{
  int a,b,c,i,l;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      T[i].parent=NIL;
      T[i].left=NIL;
      T[i].right=NIL;
    }
  
  for(i=0;i<n;i++)
    {
      scanf("%d%d%d",&a,&b,&c);
      T[a].left=b;
      T[a].right=c;
      if(b!=NIL) T[b].parent=a;
      if(c!=NIL) T[c].parent=a;
    }
  
  for(i=0;i<n;i++)
    {
      if(T[i].parent==NIL) l=i;
    }
      printf("Preorder\n");
      preorder(l);
      printf("\n");
      printf("Inorder\n");
      inorder(l);
      printf("\n");
      printf("Postorder\n");
      postorder(l);
      printf("\n");

      return 0;
}

void preorder(int u)
{
  if(u==NIL) return;
  printf(" %d",u);
  preorder(T[u].left);
  preorder(T[u].right);
}

void inorder(int u)
{
  if(u==NIL) return;
  inorder(T[u].left);
  printf(" %d",u);
  inorder(T[u].right);
}

void postorder(int u)
{
  if(u==NIL) return;
  postorder(T[u].left);
  postorder(T[u].right);
  printf(" %d",u);
}