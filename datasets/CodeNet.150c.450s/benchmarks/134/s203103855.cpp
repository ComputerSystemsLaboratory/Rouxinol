#include<bits/stdc++.h>
using namespace std;


#define MAX 100000

struct node{
  int p, r, l;
};

node d[MAX+1];

void pre_print(int x){
  if(x == -1) return;
  cout << " " << x;
  pre_print(d[x].l);
  pre_print(d[x].r);
}

void in_print(int x){
  if(x == -1) return;
  in_print(d[x].l);
  cout << " " << x;
  in_print(d[x].r);
}

void post_print(int x){
  if(x == -1) return;
  post_print(d[x].l);
  post_print(d[x].r);
  cout << " " << x;
}

int main(){
  int n;
  cin >> n;

  for(int i = 0; i < n; i++){
    d[i].l = -1;
    d[i].r = -1;
    d[i].p = -1;
  }

  for(int i = 0; i < n; i++){
    int id, c1, c2;
    cin >> id >> c1 >> c2;
    d[id].l = c1;
    d[id].r = c2;
    if(c1 != -1) d[c1].p = id;
    if(c2 != -1) d[c2].p = id;
  }

  int x;

  for(int i = 0; i < n; i++){
    if(d[i].p == -1) x = i;
  }


  cout << "Preorder" << endl;
  pre_print(x);
  cout << endl;
  cout << "Inorder" << endl;
  in_print(x);
  cout << endl;
  cout << "Postorder" << endl;
  post_print(x);
  cout << endl;

}