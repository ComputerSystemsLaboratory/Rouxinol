#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<set>
using namespace std;

typedef struct node Node;

struct node{
  int id;
  int p,lft,rht;
  node(){
    p=-1;
    lft=-1;
    rht=-1;
  }
};

vector<Node> nodes(26);

int Input(int*);
void Preorder(int);
void Inorder(int);
void Postorder(int);

int main(int argc,char* argv[]){
  int n;
  int rnode;

  cin>>n;

  rnode=Input(&n);

  cout<<"Preorder"<<endl;
  Preorder(rnode);
  cout<<endl;

  cout<<"Inorder"<<endl;
  Inorder(rnode);
  cout<<endl;
  
  cout<<"Postorder"<<endl;
  Postorder(rnode);
  cout<<endl;
  
  return 0;
}

int Input(int *n){
  int id,left,right;
  set<int> sall,sseg;
  
  for(int i=0;i<*n;i++){
    nodes[i].id=i;
    cin>>id>>left>>right;
    nodes[id].lft=left;
    nodes[id].rht=right;

    sall.insert(id);
    sseg.insert(left);sseg.insert(right);
  }

  set<int>::iterator its;
  for(its=sall.begin();its!=sall.end();its++){
    if(sseg.find(*its)==sseg.end())
      return *its;
  }
  return -1;
}

void Preorder(int nowp){

  cout<<" "<<nodes[nowp].id;

  if(nodes[nowp].lft!=-1)
    Preorder(nodes[nowp].lft);
  if(nodes[nowp].rht!=-1)
    Preorder(nodes[nowp].rht);
}

void Inorder(int nowp){

  if(nodes[nowp].lft!=-1)
    Inorder(nodes[nowp].lft);

  cout<<" "<<nodes[nowp].id;

  if(nodes[nowp].rht!=-1)
    Inorder(nodes[nowp].rht);
}

void Postorder(int nowp){

  if(nodes[nowp].lft!=-1)
    Postorder(nodes[nowp].lft);
  if(nodes[nowp].rht!=-1)
    Postorder(nodes[nowp].rht);

  cout<<" "<<nodes[nowp].id;
}