#include<iostream>
#include<cstdio>
#include<algorithm>
#include<list>
using namespace std;

#define PB push_back

int main(int argc,char* argv[]){
  int n,q;
  list<int> lis,lit;
  int i,x,ans=0;
  
  cin>>n;
  for(i=0;i<n;i++){
    cin>>x;
    lis.PB(x);
  }
  cin>>q;
  for(i=0;i<q;i++){
    cin>>x;
    lit.PB(x);
  }
  //重複要素を削除
  lis.sort();
  lis.unique();
  lit.sort();
  lit.unique();

  list<int>::iterator itlit;
  for(itlit=lit.begin();itlit!=lit.end();itlit++){
    if(find(lis.begin(),lis.end(),*itlit)!=lis.end())
      ans++;
  }

  cout<<ans<<endl;
  return 0;
}