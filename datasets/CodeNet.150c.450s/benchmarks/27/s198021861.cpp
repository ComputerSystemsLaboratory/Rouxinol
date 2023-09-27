#include <iostream>
#include <string>
using namespace std;
#define NIL -1

struct Node {
  int right, left;
};

Node T[1000000];
int root = NIL;

void insert( int k ) {
  T[k].left = NIL;
  T[k].right = NIL;

  int y = NIL; //xの親
  int x = root; //Tの根
  while ( x != NIL ) {
    y = x; //親を設定
    if ( k < x ) {
      x = T[x].left; //左の子へ移動
    } else {
      x = T[x].right; //右の子へ移動
    }
  }
  if ( y == NIL ) root = k; //Tが空の場合
  else if ( k < y ) {
    T[y].left = k; //kをyの左の子にする 
  } else {
    T[y].right = k; //kをyの右の子にする
  }
}

//中間順巡回
void print1( int k ) {
  if ( k == NIL ) return;
  print1(T[k].left);
  cout << " " << k;
  print1(T[k].right);
}

//先行順巡回
void print2( int k ) {
  if ( k == NIL ) return;
  cout << " " << k;
  print2(T[k].left);
  print2(T[k].right);
}

int main() {
  int m, k;
  string str;

  cin >> m;
  for ( int i = 0; i < m; i++ ) {
    cin >> str;
    if ( str == "insert" ) {
      cin >> k;
      insert(k);
    } else if ( str == "print" ) {
      print1(root);
      cout << endl;
      print2(root);
      cout << endl;
    }
  }
  return 0;
}