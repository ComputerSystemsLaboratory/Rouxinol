#include <iostream>
using namespace std;

int P[10010]; //0から10000までの取り扱い可能
int n,q;
 
 int root(int a) { //aのroot(代表元)を求める
   if (P[a] == a) return a; //aはroot
   return (P[a] = root(P[a])); //aの親のrootを求め、aの親とする
  }
  bool is_same_set(int a, int b){ //aとbが同じグループに属するか?
    return root(a) == root(b);
	}
  void unite(int a, int b) { //aとbを同一グループにまとめる
    P[root(a)] = root(b);
	}
	
int main() {
  int x,y,num,check;
  cin >> n >> q;
  for (int j = 0; j < n; j++){
    P[j] = j;
	}
  int a[q];
  for (int l = 0; l < q; l++){
    cin >> num >> x >> y;
       if (num == 0){
	     unite(x,y);
		 }
		else{
		  a[check] = is_same_set(x,y);
		  check++;
		  }
	}
  for (int t = 0; t < check; t++){
    cout << a[t] << endl;
	}
  }