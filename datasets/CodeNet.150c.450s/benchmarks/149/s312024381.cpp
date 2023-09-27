//素集合データ構造:Disjoint Set

//union find tree
#include<iostream>
#include<cstdio>
#include<cstdlib>
#define rep(i,j) for(i=0;i<j;i++)
using namespace std;

typedef int Natural;//ノード数により...


//配列外参照対策していない
//Node 0 to n-1でも1 to nでもOKなはず
class UnionFindTree
{
public:
  Natural Node_num;
  Natural *parents;
  Natural *ranks;

  UnionFindTree(Natural n):Node_num(n+1)
  {
    n++;
    parents=new Natural[n];
    ranks=new Natural[n];
    for(Natural i=0;i<n;i++)
      {
	parents[i]=i;
	ranks[i]=0;
      }
  }
  
  ~UnionFindTree()
  {
    delete[] parents;
    delete[] ranks;
  }

  Natural get_root(Natural x)
  {
    if(parents[x]==x)return x;
    else 
      {
	//探索と同時に根につなぎ変える
	return parents[x]=get_root(parents[x]);
      }
  }

  void unite(Natural x,Natural y)
  {
    //異なる集合にいたら統合
    if( (x=get_root(x))!=(y=get_root(y)) )
      {
	//木が浅くなるような統合をする
	if(ranks[x]>ranks[y])
	  parents[y]=x;
	else if(ranks[x]<ranks[y])
	  parents[x]=y;
	else
	  {
	    parents[x]=y;
	    ranks[y]++;
	  }
      }
  }

  //xとyが同じ集合にあるか
  bool is_same(Natural x,Natural y)
  {
    return get_root(x)==get_root(y);
  }

};


int main()
{
  int n,q;
  cin>>n>>q;
  UnionFindTree uft(n);
  int i;
  rep(i,q)
    {
      int query,x,y;
      cin>>query>>x>>y;
      if(query)//is_same
	cout<< (uft.is_same(x,y) ? 1 : 0 )<<endl;
      else //unite
	uft.unite(x,y);
    }
  return 0;
}