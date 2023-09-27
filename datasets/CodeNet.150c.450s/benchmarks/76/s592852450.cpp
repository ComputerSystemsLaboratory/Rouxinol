#include<bits/stdc++.h>
using namespace std;
#define NIL 2000000001
typedef struct{
  int p,l,r,key; 
}node;

node tree[500001];
queue<int> q[2];
int root=NIL;

void insert(int key,int i){
  node z={NIL,NIL,NIL,key};
  int x=(root==NIL?NIL:root),y=NIL;
  if(root==NIL)root=i;
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

int find(int key){
  int f=0,x=root;
  while(x!=NIL){
    if(tree[x].key>key){
      x=tree[x].l;
    }else if(tree[x].key<key){
      x=tree[x].r;
    }else{
      f=1;
      break;
    }
  }
  return f;
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
      
    }else if(a[0]=='f'){
      int key;
      cin>>key;
      cout<<(find(key)?"yes":"no")<<endl;
    }else{
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