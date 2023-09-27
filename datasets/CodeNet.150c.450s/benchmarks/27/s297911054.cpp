#include<iostream>
#include<algorithm>
using namespace std;

typedef struct node Node;

struct node{
  double val;
  Node *lft,*rht;
};

Node* Insert(Node*,double);
void PrintInOrder(Node*);
void PrintPreOrder(Node*);

int main(int argc,char* argv[]){
  int n;
  double x;
  string str;
  Node *root=NULL;

  cin>>n;
  for(int i=0;i<n;i++){
    cin>>str;

    switch(str[0]){
    case 'i':
      cin>>x;
      root=Insert(root,x);
      break;
    case 'p':
      PrintInOrder(root); cout<<endl;
      PrintPreOrder(root); cout<<endl;
      break;
    }
  }

  return 0;
}

Node* Insert(Node *p,double x){
  if(p == NULL){
    Node *q = new Node;
    q->val=x;
    q->lft = q->rht = NULL;
    return q;
  }
  else if(x < p->val)
    p->lft = Insert(p->lft,x);
  else
    p->rht = Insert(p->rht,x);

  return p;
}

void PrintInOrder(Node *p){
  if(p != NULL){
    PrintInOrder(p->lft);

    cout<<" "<<p->val;

    PrintInOrder(p->rht);
  }
}

void PrintPreOrder(Node *p){
  if(p != NULL){
    cout<<" "<<p->val;

    PrintPreOrder(p->lft);
    PrintPreOrder(p->rht);
  }
}