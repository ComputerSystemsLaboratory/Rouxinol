#include<bits/stdc++.h>
using namespace std;

typedef struct{
  
  int parent , bro , degree , depth , type, height;
  int r,l;

}node_t;

vector<node_t> tree;

void Preorder(int);
void Inorder(int);
void Postorder(int);

int Depth(int num , int d){

  int lowest=0;
  int work=0;

  tree[num].depth = d;

  if(tree[num].degree == 0){
    tree[num].height = 0;
    return 1;
  }

  if(tree[num].l!=-1)
    lowest = Depth(tree[num].l , d+1);
  if(tree[num].r!=-1)
    work = Depth(tree[num].r , d+1);

  lowest = (lowest < work)? work : lowest;
  tree[num].height = lowest;
  
  return lowest+1;

}


int main(){

  int n,num,root;


  cin >> n;
  tree.resize(n);
  for(int i=0; i<n; i++){
    tree[i].parent = tree[i].bro = -1;
    tree[i].degree = 0;
    tree[i].type = 2;
  }


  for(int i=0; i<n; i++){
    cin >> num;
    cin >> tree[num].l >> tree[num].r;
    if(tree[num].l != -1){
      tree[num].type = 1;
      tree[ tree[num].l ].parent = num;
      tree[ tree[num].l ].bro = tree[num].r;
      tree[num].degree++;    
    }
    if(tree[num].r!=-1){
      tree[num].type = 1;
      tree[ tree[num].r ].parent = num;
      tree[ tree[num].r ].bro = tree[num].l;    
      tree[num].degree++; 
    }
  }    


  for(int i=0; i<n; i++){
    if(tree[i].parent == -1){
      tree[i].type = 0;
      tree[i].depth = 0;
      Depth(i,0);
      root = i;
      break;
    }
  }




  /*Output*/
  cout << "Preorder" << endl;
  Preorder(root);
  cout << endl;

  cout << "Inorder" << endl;
  Inorder(root);
  cout << endl;

  cout << "Postorder" << endl;
  Postorder(root);
  cout << endl;



  return 0;
}



void Inorder(int num){

  if(tree[num].l != -1)
    Inorder(tree[num].l);
  
  cout << ' ' << num;

  if(tree[num].r != -1)
    Inorder(tree[num].r);

}

void Preorder(int num){

  cout << ' ' << num;

  //if(tree[num].l != -1)cout << ' ' << tree[num].l;
  if(tree[num].l != -1)Preorder(tree[num].l);

  //if(tree[num].r != -1)cout << ' ' << tree[num].r;
  if(tree[num].r != -1)Preorder(tree[num].r);

}


void Postorder(int num){

  if(tree[num].l != -1)Postorder(tree[num].l);
  if(tree[num].r != -1)Postorder(tree[num].r);

  cout << ' ' << num;

}