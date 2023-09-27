#include<bits/stdc++.h>
using namespace std;
#define NIL 2000000001
typedef struct{
  int p,l,r,key; 
}node;

node tree[500001];
queue<int> q[2];

void insert(int key,int i){
  node z={NIL,NIL,NIL,key};
  int x=(i==0?NIL:0),y=NIL;
  while(x!=NIL){
    y=x;
    if(z.key<tree[x].key){
      x=tree[x].l;
    }else{
      x=tree[x].r;
    }
  }
  z.p=y;
  if(y==NIL){
    tree[0]=z;
  }else if(z.key<tree[y].key){
    tree[y].l=i;
  }else {
    tree[y].r=i;
  }
  tree[i]=z;
}

void print(int n=0){
  if(n==NIL)return;
  q[1].push(tree[n].key);
  print(tree[n].l);
  q[0].push(tree[n].key);
  print(tree[n].r);
}

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    string a;
    cin>>a;
    if(a[0]=='i'){
      int k;
      cin>>k;
      insert(k,i);
    }else{
      //for(int j=0;j<n;j++)cout<<tree[j].key<<" "<<tree[j].p<<endl;
      print();
      for(int j=0;j<2;j++){
	while(!q[j].empty()){
	  cout<<" "<<q[j].front();
	  q[j].pop();
	}
	cout<<endl;
      }
    }
  }
  return 0;
}