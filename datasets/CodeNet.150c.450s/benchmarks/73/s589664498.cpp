#include <random>
#include <utility>
using namespace std;
template<typename T> class RBST {
public:
	struct node {
		T value;
		T lazy_val;
		T sum;
		int cnt;
		bool lazy;
		node *left,*right;
		node(T v):value(v),lazy(0),lazy_val(0),sum(v),cnt(1) {
			left=right=NULL;
		}
	};
	random_device rnd;
	mt19937 mt;
	node *root;
	RBST():root(NULL) {mt.seed(rnd());}
	int count(node *t) {return !t?0:t->cnt;}
	inline node *push(node *t) {
		if(!t) return NULL;
		if(t->lazy) {
			t->value+=t->lazy_val;
			t->sum+=t->lazy_val*(count(t->left)+count(t->right)+1);
			if(t->left) {
				t->left->lazy=1;
				t->left->lazy_val+=t->lazy_val;
			}
			if(t->right) {
				t->right->lazy=1;
				t->right->lazy_val+=t->lazy_val;
			}
		}
		t->lazy=0;
		t->lazy_val=0;
		return t;
	}
	node *update(node *t) {
		if(!t) return NULL;
		push(t);
		t->cnt=count(t->left)+count(t->right)+1;
		push(t->left);
		push(t->right);
		t->sum=t->value;
		if(t->left) t->sum+=t->left->sum;
		if(t->right) t->sum+=t->right->sum;
		return t;
	}
	node *merge(node *l,node *r) {
		if(!l||!r) return !l?r:l;
		push(l);
		push(r);
		uniform_real_distribution<> x(0,l->cnt+r->cnt);
		if(x(mt)<l->cnt) {
			l->right=merge(l->right,r);
			return update(l);
		}else {
			r->left=merge(l,r->left);
			return update(r);
		}
	}
	pair<node*,node*> split(node *t,int k) {
		if(!t) return pair<node*,node*>(NULL,NULL);
		push(t);
		if(k<=count(t->left)) {
			pair<node*,node*> s=split(t->left,k);
			t->left=s.second;
			return make_pair(s.first,update(t));
		}else {
			pair<node*,node*> s=split(t->right,k-count(t->left)-1);
			t->right=s.first;
			return make_pair(update(t),s.second);
		}
	}
	node *insert(node *t,int k,T v) {
		pair<node*,node*> s=split(t,k);
		node *u=new node(v);
		t=merge(s.first,u);
		t=merge(t,s.second);
		return update(t);
	}
	void insert(int k,T v) {
		root=insert(root,k,v);
	}
	int lower_bound(node *t,T v) {
		if(!t) return 0;
		push(t);
		int c=count(t->left);
		if(t->value>v) {
			return lower_bound(t->left,v);
		}else if(t->value==v) {
			return c;
		}else {
			return c+1+lower_bound(t->right,v);
		}
	}
	int lower_bound(T v) {
		return lower_bound(root,v);
	}
	T get(node *t,int k) {
		push(t);
		int c=count(t->left);
		if(c==k) {
			return t->value;
		}else if(c>k) {
			return get(t->left,k);
		}else {
			return get(t->right,k-c-1);
		}
	}
	T get(int k) {
		return get(root,k);
	}
	node *erase(node *t,int k) {
		pair<node*,node*> u,v;
		u=split(t,k+1);
		v=split(u.first,k);
		t=merge(v.first,u.second);
		return update(t);
	}
	void erase(int k) {
		root=erase(root,k);
	}
	void add(int l,int r,T x) {
		pair<node*,node*> u,v;
		u=split(root,r);
		v=split(u.first,l);
		v.second->lazy=1;
		v.second->lazy_val+=x;
		root=merge(v.first,merge(v.second,u.second));
	}
	T sum(int l,int r) {
		pair<node*,node*> u,v;
		u=split(root,r);
		v=split(u.first,l);
		T s=v.second->sum;
		root=merge(v.first,merge(v.second,u.second));
		return s;
	}
};
int main() {
	RBST<int> r;
	int n,q;
	scanf("%d %d",&n,&q);
	for(int i=0;i<n;i++) {
		r.insert(0,0);
	}
	for(int i=0;i<q;i++) {
		int com,x,y;
		scanf("%d %d %d",&com,&x,&y);
		if(com) {
			printf("%d\n",r.sum(x-1,y));
		}else {
			r.add(x-1,x,y);
		}
	}
}