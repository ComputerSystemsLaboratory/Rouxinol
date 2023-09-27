#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<functional>
#include<queue>
#include<map>
#include<cmath>
#include<algorithm>
#include<bitset>
#include<utility>
#include<complex>
#include<cstdlib>
#include<set>
#include<cctype>

#define DBG cerr << '!' << endl;
#define REP(i,n) for(int (i) = (0);(i) < (n);++i)
#define rep(i,s,g) for(int (i) = (s);(i) < (g);++i)
#define rrep(i,s,g) for(int (i) = (s);i >= (g);--(i))
#define PB push_back
#define MP make_pair
#define FI first
#define SE second
#define SHOW1d(v,n) {for(int i = 0;i < (n);i++)cerr << v[i] << ' ';cerr << endl << endl;}
#define SHOW2d(v,i,j) {for(int a = 0;a < i;a++){for(int b = 0;b < j;b++)cerr << v[a][b] << ' ';cerr << endl;}cerr << endl;}
#define ALL(v) v.begin(),v.end()

using namespace std;

typedef long long ll;
typedef vector<int> iv;
typedef vector<iv> iiv;
typedef vector<string> sv;

class segtree{
public:
  int Node;
  vector<int> table;
  segtree(int);
  int ope(const int,const int);
  void update(int index,const int value){ // index is 0-indexed.
    index += Node; // query function
    table[index] += value;//update section
    while(index > 0){
      index /= 2;
      table[index] = ope(table[2*index],table[2*index+1]);
    }
  }
  int find(int l, int r);
};
int segtree::find(int l,int r){ // l,r is 0-indexed.
    if(l == r) return table[r+Node];
    l += Node; r += Node;
    int ans = 0;
    for(; l <= r;l >>=1, r >>=1){
      if(r == l){ans=ope(ans,table[l]); return ans;}
      if(r%2 == 0) ans=ope(ans,table[r]),--r;
      if(l%2) ans=ope(ans,table[l]),++l;
    }
    return ans;
}
segtree::segtree(int Max_Node){  // initialize
  Node = 2;
  while(Node < Max_Node)
    Node *= 2;
  table.resize(2*Node);
  for(int i = Node;i < Node*2; i++)
    table[i] = 0; // initialize
  for(int i= Node-1; i > 0; i--)
    table[i] = ope(table[i*2],table[i*2+1]);
}

int segtree::ope(const int a,const int b){
  return a+b;
}


int main()
{
	int n,q;
	cin >> n >> q;
	
	segtree seg(n);
	
	//SHOW1d(seg.table,(seg.Node*2));
	
	REP(i,q)
	{
		int a,b,c;
		cin >> a >> b >> c;
		
		if(a)
		{
			cout << seg.find(b,c) << endl;
		}
		else
		{
			seg.update(b,c);
		//	SHOW1d(seg.table,(seg.Node*2));
		}
	}
	
	return 0;
}