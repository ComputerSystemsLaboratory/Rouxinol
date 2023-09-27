#include<bits/stdc++.h>
using namespace std;
#define int long long
struct node{
  int value;
  node *next;
  node(int value,node *next):value(value),next(next){}
};
int INF=1LL<<55LL;
string lcs(string x,string y){
  int n=x.size(),m=y.size();
  map<char,vector<int> > M;
  for(int j=m-1;j>=0;j--) M[y[j]].push_back(j);
  vector<int> xs(n+1,INF);
  xs[0]=-INF;
  vector<node* > link(n+1);
  for(int i=0;i<n;i++){
    if(M.count(x[i])){
      vector<int> ys=M[x[i]];
      for(int j=0;j<(int)ys.size();j++){
	int k=distance(xs.begin(),lower_bound(xs.begin(),xs.end(),ys[j]));
	xs[k]=ys[j];
	link[k]=new node(y[ys[j]],link[k-1]);
      }
    }
  }
  string res;
  int l=distance(xs.begin(),lower_bound(xs.begin(),xs.end(),INF-1))-1;
  for(node *p=link[l];p!=NULL;p=p->next)
    res.push_back(p->value);
  return res;
}
signed main(){
  int q;
  cin>>q;
  while(q--){
    string x,y;
    cin>>x>>y;
    cout<<lcs(x,y).size()<<endl;
  }
  return 0;
}