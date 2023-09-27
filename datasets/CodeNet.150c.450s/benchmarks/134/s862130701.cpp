#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   for(int i=0;i<(n);++i)
#define SORT(c)    sort((c).begin(),(c).end())
#define EPS  1e-10//sample:if((double)>=(double)+EPS)
#define CLR(a) memset((&a), 0 ,sizeof(a))//clear memory
#define dump(x)  cerr << #x << " = " << (x) << endl;//debug
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
//cin,cout release
//std::cin.tie(0);
//ios::sync_with_stdio(false);
using namespace std;

struct node {
  int id,parent,left,right;
};
typedef struct node *bint;
struct node T[10000];
void preperse(int u){
  if(u==-1)return;
  printf(" %d",u);
  preperse(T[u].left);
  preperse(T[u].right);
}
void inperse(int u){
  if(u==-1)return;
  inperse(T[u].left);
  printf(" %d",u);
  inperse(T[u].right);
}
void postperse(int u){
  if(u==-1)return;
  postperse(T[u].left);
  postperse(T[u].right);
  printf(" %d",u);
}

int main(){
  int n,id,l,r;
  cin>>n;
  for(int i=0;i<10000;i++)T[i].parent=-1;
  for(int i=0;i<n;i++){
    cin>>id>>l>>r;
    T[id].left=l;
    T[id].right=r;
    if(l!=-1)T[l].parent=id;
    if(r!=-1)T[r].parent=id;
  }
  int root;
  for(int i=0;i<n;i++)if(T[i].parent==-1)root=i;

  cout<<"Preorder"<<endl;
  preperse(root);
  cout<<endl<<"Inorder"<<endl;
  inperse(root);
  cout<<endl<<"Postorder"<<endl;
  postperse(root);
  cout<<endl;

  return 0;
}
