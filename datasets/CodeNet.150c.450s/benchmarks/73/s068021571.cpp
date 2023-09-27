#include<iostream>
#include<vector>
#include<string>
#include<algorithm>	
#include<map>
#include<set>
#include<utility>
#include<cmath>
#include<cstring>
#include<queue>
#include<stack>
#include<cstdio>
#include<sstream>
#include<iomanip>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)
using namespace std;
//kaewasuretyuui
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vp;
typedef vector<vp> vvp;
typedef vector<string> vs;
typedef pair<int,pii> pip;
typedef vector<pip>vip;
const double PI=acos(-1);
const double EPS=1e-8;
const double inf=1e8;
template<class T>
struct Treap{
	struct node_t{
		T val;
		T sum;
		node_t *lch,*rch;
		int pri;
		int cnt;
		node_t(T v,int p):val(v),pri(p),cnt(1),sum(v){lch=rch=NULL;}
	};
	node_t *root;
	Treap():root(NULL){}
	
	int count(node_t *t){return t?t->cnt:0;}
	T   sum(node_t *t)  {return t?t->sum:0;}//-------------------!!!!!!!!!!!!!!!!!!!
	int size()          {return count(root);}
	T   combine(T a,T b){return a+b;}
	
	node_t *update(node_t *t){
		t->cnt=count(t->lch)+count(t->rch)+1;
		t->sum=combine(combine(sum(t->lch),sum(t->rch)),t->val);
		return t;
	}
	node_t *merge(node_t *l,node_t *r){
		if(!l||!r)return l?l:r;
		if(l->pri>r->pri){
			l->rch=merge(l->rch,r);
			return update(l);
		}else{
			r->lch=merge(l,r->lch);
			return update(r);
		}
	}
	pair<node_t*,node_t*>split(node_t *t, int k){
		if(!t)return mp((node_t*)NULL,(node_t*)NULL);
		if(k<=count(t->lch)){
			pair<node_t*,node_t*>s=split(t->lch,k);
			t->lch=s.second;
			return mp(s.first,update(t));
		}else{
			pair<node_t*,node_t*>s=split(t->rch,k-count(t->lch)-1);
			t->rch=s.first;
			return mp(update(t),s.second);
		}
	}
	node_t *insert(node_t *t,int k,T val,int pri){
		pair<node_t*,node_t*>s=split(t,k);
		t=merge(s.first,new node_t(val,pri));
		t=merge(t,s.second);
		return update(t);
	}
	node_t *erase(node_t *t,int k){
		pair<node_t*,node_t*>s1,s2;
		s2=split(t,k+1);
		s1=split(s2.first,k);
		t=merge(s1.first,s2.second);
		return update(t);
	}
	node_t *find(node_t *t,int k){
		int c=count(t->lch);
		if(k<c)return find(t->lch,k);
		if(k==c)return t;
		return find(t->rch,k-c-1);
	}
	void shift(int l,int r){
		pair<node_t*,node_t*>a,b,c;
		c=split(root,r);
		b=split(c.first,r-1);
		a=split(b.first,l);
		root=merge(a.first,b.second);
		root=merge(root,a.second);
		root=merge(root,c.second);
	}
	int query(int l,int r,node_t *t){
		int sz=count(t);
		if(sz<=l||r<=0)return 0;//------------!!!!!!!!!!!!!!!
		if(l<=0&&r>=sz)return sum(t);
		int c=count(t->lch);
		int lv=query(l,r,t->lch);
		int rv=query(l-c-1,r-c-1,t->rch);
		int res=combine(lv,rv);
		if(l<=c&&c<r)res=combine(res,t->val);
		return res;
	}
	void insert(int k,T val){root=insert(root,k,val,rand());}
	void erase(int k){root=erase(root,k);}
	node_t *find(int k){return find(root,k);}
	int query(int l,int r){return query(l,r,root);}
};

int main(){
	srand(time(NULL));
	int n,q;
	cin>>n>>q;
	Treap<int>t;
	t.insert(inf,0);
	rep(i,n)t.insert(i,0);
	while(q--){
		int a,b,c;
		cin>>a>>b>>c;
		if(a==1){
			b--;c--;
			cout<<t.query(b,c+1)<<endl;
		}else{
			b--;
			int r=t.find(b)->val;
			t.erase(b);
			t.insert(b,r+c);
		}
	}
}