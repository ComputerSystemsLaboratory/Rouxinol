#include<iostream>

using namespace std;

#define MAX 10000
#define NIL -1

struct Node{
  int p,l,r;
};

struct Node T[MAX];

int k;

void pre(int n){
  if(n == NIL) return;
  cout << " " << n;
  pre(T[n].l);
  pre(T[n].r);
}

void in(int n) {
  if(n==NIL) return;
  in(T[n].l);
  cout << " " << n;
  in(T[n].r);
}

void post(int n) {
    if(n==NIL) return;
    post(T[n].l);
    post(T[n].r);
    cout << " " << n;
}

int main(){
int a,b,c,root;
cin >> k;

for(int i=0;i<k;i++) T[i].p=NIL;

for(int i=0;i<k;i++){
  cin >> a;
  cin >> b;
  cin >> c;

  T[a].l=b;
  T[a].r=c;
  if(b!=NIL) T[b].p=a;
  if(c!=NIL) T[c].p=a;
}

for(int i=0;i<k;i++) if(T[i].p==NIL) root=i;

cout << "Preorder" << endl;
pre(root);
cout << endl;

cout << "Inorder" << endl;
in(root);
cout << endl;

cout << "Postorder" << endl;
post(root);
cout << endl;


  return 0;
}

