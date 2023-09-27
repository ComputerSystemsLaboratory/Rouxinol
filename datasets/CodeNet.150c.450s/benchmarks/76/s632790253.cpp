#include<iostream>
#include<algorithm>
using namespace std;

typedef struct node Node;
typedef long long ll;

struct node{
  ll val;
  Node *lft,*rht;
};

Node* Insert(Node*,ll);
bool Find(Node*,ll);
void PrintInOrder(Node*);
void PrintPreOrder(Node*);

int main(int argc,char* argv[]){
  Node *root=NULL;
  int n;
  ll x;
  string str;

  cin>>n;
  for(int i=0;i<n;i++){
    cin>>str;
    switch(str[0]){
    case 'i':
      cin>>x;
      root = Insert(root,x);
      break;
    case 'f':
      cin>>x;
      if(Find(root,x))
	cout<<"yes"<<endl;
      else
	cout<<"no"<<endl;
      break;
    case 'p':
      PrintInOrder(root); cout<<endl;
      PrintPreOrder(root); cout<<endl;
      break;
    }
  }

  return 0;
}

Node* Insert(Node *p,ll x){
  if(p == NULL){
    Node *q = new Node;
    q->val = x;
    q->lft = q->rht = NULL;
    return q;
  }
  else if(x < p->val)
    p->lft = Insert(p->lft,x);
  else
    p->rht = Insert(p->rht,x);

  return p;
}

bool Find(Node *p,ll x){
  if(p == NULL)
    return false;
  else if(x == p->val)
    return true;
  else if(x < p->val)
    return Find(p->lft,x);
  else
    return Find(p->rht,x);
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