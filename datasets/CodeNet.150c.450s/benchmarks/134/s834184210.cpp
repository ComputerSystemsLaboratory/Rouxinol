#include <iostream>
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define MAX_V 10000
using namespace std;
struct node{
  int id,parent,left,right,sibling;
  node():id(0),parent(-1),left(-1),right(-1),sibling(-1){}
};
node nodes[MAX_V]{};

void printPreorder(node n){
  cout<<" "<<n.id;
  if(n.left>=0) printPreorder(nodes[n.left]);
  if(n.right>=0) printPreorder(nodes[n.right]);
}
void printInorder(node n){
  if(n.left>=0) printInorder(nodes[n.left]);
  cout<<" "<<n.id;
  if(n.right>=0) printInorder(nodes[n.right]);
}
void printPostorder(node n){
  if(n.left>=0) printPostorder(nodes[n.left]);
  if(n.right>=0) printPostorder(nodes[n.right]);
  cout<<" "<<n.id;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  int n; cin>>n;
  REP(i,n){
    int id,left,right;
    cin>>id>>left>>right;
    nodes[id].id=id;
    nodes[id].left=left;
    nodes[id].right=right;
    if(left>=0){
      nodes[left].parent=id;
      nodes[left].sibling=right;
    }
    if(right>=0){
      nodes[right].parent=id;
      nodes[right].sibling=left;
    }
  }
  int root=-1;
  REP(i,n){
    if(nodes[i].parent==-1){
      root=i;
      break;
    }
  }
  cout<<"Preorder\n";
  printPreorder(nodes[root]); cout<<"\n";
  cout<<"Inorder\n";
  printInorder(nodes[root]); cout<<"\n";
  cout<<"Postorder\n";
  printPostorder(nodes[root]); cout<<"\n";
}