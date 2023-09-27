#include <bits/stdc++.h>
using namespace std;

#define INF 1e9
template<class T> class treap{
public:
	struct node{
		T val,sum,mini,maxi;
		node *left , *right;
		int pri;
		unsigned sz;
		node(T val,int pri):val(val),sum(val),mini(val),maxi(val),pri(pri),sz(1){
			left = right = NULL;
		}
	};

	node *root;

	treap():root(NULL){
		srand(time(NULL));
	}

	treap(int n):root(NULL){
		srand(time(NULL));
		for(int i=0;i<n;i++){
			insert(0,0);
		}
	}

	unsigned size(){ return size(root); }
	unsigned size(node *v){ return !v?0:v->sz; }
	T sum(node *v){ return !v?0:v->sum; }
	T MIN(node *v){ return !v?INF:v->mini; }
	T MAX(node *v){ return !v?-INF:v->maxi; }

	node *update(node *v){
		v->sz = size(v->left)+size(v->right)+1;
		v->sum = sum(v->left)+sum(v->right)+v->val;
		v->mini = min( MIN(v->left) , MIN(v->right) );
		v->maxi = max( MAX(v->left) , MAX(v->right) );
		return v;
	}

	node *merge(node *s , node *t){
		if( !s || !t )return s?s:t;
		if( s->pri > t->pri){
			s->right = merge( s->right , t );
			return update(s);
		}
		else{
			t->left = merge( s, t->left);
			return update(t);
		}
	}

	pair<node*,node*> split(node *v,unsigned k){
		
		if(!v)return pair<node*,node*>(NULL,NULL);

		if( k <= size(v->left) ){
			pair<node*,node*> s = split( v->left, k );
			v->left = s.second;
			return make_pair( s.first , update(v) );
		}

		else{
			pair<node*,node*> s = split( v->right, k-size(v->left)-1 );
			v->right = s.first;
			return make_pair( update(v) , s.second );
		}
	}

	node *find(unsigned k){
		node *v=root;
		while(v){
			unsigned s = size(v->left);
			if( s > k ) v = v->left;
			else if( s == k )break;
			else{
				v = v->right;
				k -= s+1;
			}
		}
		return v;
	}

	void point_update(int k,T val){ point_update(root,k,val); }
	void point_update(node *v,int k,T val){
		if( k < size(v->left) )point_update(v->left,k,val);
		else if( k > size(v->left) )point_update(v->right,k-size(v->left)-1,val);
		else v->val += val;
		update(v);
	}

	// [ l , r ]
	int range_sum(unsigned l,unsigned r){
		int sum=0;
		node *v1=root,*v2=root;
		while(v1){
			unsigned s = size(v1->left);
			if( s > l ) v1 = v1->left;
			else if( s == l ){
				if(v1->left) sum += v1->left->sum;
				break;
			}
			else{
				if(v1->left) sum += v1->left->sum ;
				sum += v1->val;
				v1 = v1->right;
				l -= s+1;
			}
		}
		while(v2){
			unsigned s = size(v2->left);
			if( s > r ){
				if(v2->right) sum += v2->right->sum ;
				sum += v2->val;
				v2 = v2->left;
			}
			else if( s == r ){
				if(v2->right) sum  += v2->right->sum;
				break;
			}
			else{
				v2 = v2->right;
				r -= s+1;
			}
		}
		return root->sum-sum;
	}

	int getval(int k){
		node *t=find(k);
		return t->val;
	}

	void insert(unsigned k,T val){ root = insert(root,k,val,rand()); }
	node *insert(node *t,unsigned k,T val,int pri){
		pair<node*,node*> s = split(t,k);
		t = merge( s.first , new node(val,pri));
		t = merge( t , s.second );
		return update(t);
	}

	void erase(int k){ root = root->sz==1?NULL:erase( root, k );}
	node *erase(node *t, unsigned k){
		pair<node*,node*>u,v;
		u = split(t,k+1);
		v = split(u.first,k);
		t = merge(v.first,u.second);
		return update(t);
	}

	void range_erase(int l,int r){ root = range_erase( root , l , r );}
	node range_erase(node *t,unsigned k){
		pair<node*,node*>u,v;
	}

	void push_back(T val){ insert(root?root->sz:0,val); }
	void pop_back(){ erase(root->sz-1); }

	void print_array(){
		int k = root->sz;
		cout<<"root value = "<<root->val<<endl;
		cout<<"size of array = "<<k<<endl;
		for(int i = 0; i < k ; i++ ){
			if( i ) cout<<" ";
			cout<<getval(i);
		}
		cout<<endl;
	}

	void print_tree(){
		for(int i=0;i<root->sz;i++){
			cout<<i<<' '<<endl;
			node *v=find(i);
			cout<<"left = "<<(!v->left?9:v->left->val)<<endl;
			cout<<"right = "<<(!v->right?9:v->right->val)<<endl;
		}
	}
};

int main(){
	int n,q;
	cin>>n>>q;
	treap<int> tri(n);
	while(q--){
		int a,b,c;
		cin>>a>>b>>c;
		if(a){
			b--;c--;
			cout<<tri.range_sum(b,c)<<endl;
		}
		else{
			b--;
			tri.point_update(b,c);
		}
	}
}
