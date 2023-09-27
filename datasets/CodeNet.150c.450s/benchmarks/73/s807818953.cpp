#include<iostream>
#include<vector>
using namespace std;
/*
  親が子の和になる二分木

  最深部は1bit目が1、その上は1bit目0で2bit目が1...
  となる様にインデックス付け
*/


/*
  注意 : Index [1...n]
 */
typedef int BIT_T;
class BIT
{
private:
  vector<BIT_T> bit;
public:
  BIT(int n)
  {
    bit.resize(n+1,0);
  }
  
  //index 0 to i の和を返す
  BIT_T sum(int i)
  {
    BIT_T s=0;
    while(i>0){
      s+=bit[i];
      i-=i& (-i);//i& -i はiの最小1bit  <- 2^kを引く
    }
    return s;
  }
  
  //index i to j の和
  BIT_T sum(int i,int j)
  {
    return sum(j)-sum(i-1);
  }

  //index i に x をたす
  void add(int i,BIT_T x){
    while(i<=bit.size()){
      bit[i]+=x;
      i+=i& (-i);
    }
  }
};


int main()
{
  int n,q;
  cin>>n>>q;
  BIT bit(n);
  for(int i=0;i<q;i++)
    {
      int com,x,y;
      cin>>com>>x>>y;
      if(com)
	cout<<bit.sum(x,y)<<endl;
      else
	bit.add(x,y);
    }
  return 0;
}