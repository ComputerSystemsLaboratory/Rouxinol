

        /*vvv>
		zzzzzI
 .---.  zzuzuI                 .vgggg&,.
+++++=  dunkoI  .WbbWo       JMM9^```?TMB`  ..&gNNg,.   gggggggJ,   qgggggggg] (&&&&&&&&[   c+OA&J,   (&&&&&&+J,   .cJeAA&-.  (&&&&&&&&x   .&AA&=-.
+++++=  dunkoI  Xpbpbp      JM#`           (M#^   ?MMp  MM|   +TMN. JMF      ' |yk      ` dVY    7Vk,  Vy     XV  cVf     ?Y!  JM         V$      `
+++++=  OunkoI  Xppppp      dMN           .MM+     .MM  MM|     MM] JMMMMMM+   |@tqkoh)  ,y0      (V$  yyyyyyyV7  VV           JMWyZWr    TWVVVVW&,
++++++  dZZZZ0  Xppppp      ^HMN,    _.db  WMm,   .MMF  MM|   ..MM` JMF      . |yk       .WV&.   .XW'  yy   4yn.  jyn      +.  JM                #S
`++++`  ?ZZZX=  ?WWWW=        -THMMMMH9^    (TMMMMM9!   MMMMMMM""   JMMMMMMMME |UU.        ?TUUUUY=    UU.   (UU-  ^7TUUUV7!   JUUUUUUUU  7TUNKO*/

//Ricty Diminished
#include "bits/stdc++.h"
using namespace std;typedef long long lint;typedef vector<lint> liv;
//#define rep(i,n) for(int i=0;i<n;++i)
#define all(v) v.begin(),v.end()
#define linf 1152921504606846976
#define MAXN 100100
#define md 1000000007//998244353

#define pb push_back
#define _vcppunko4(tuple) _getname4 tuple
#define _getname4(_1,_2,_3,_4,name,...) name
#define _getname3(_1,_2,_3,name,...) name
#define _trep2(tuple) _rep2 tuple
#define _trep3(tuple) _rep3 tuple
#define _trep4(tuple) _rep4 tuple
#define _rep1(n) for(lint i=0;i<n;++i)
#define _rep2(i,n) for(lint i=0;i<n;++i)
#define _rep3(i,a,b) for(lint i=a;i<b;++i)
#define _rep4(i,a,b,c) for(lint i=a;i<b;i+=c)
#define _trrep2(tuple) _rrep2 tuple
#define _trrep3(tuple) _rrep3 tuple
#define _trrep4(tuple) _rrep4 tuple
#define _rrep1(n) for(lint i=n-1;i>=0;--i)
#define _rrep2(i,n) for(lint i=n-1;i>=0;--i)
#define _rrep3(i,a,b) for(lint i=b-1;i>=a;--i)
#define _rrep4(i,a,b,c) for(lint i=a+(b-a-1)/c*c;i>=a;i-=c)
template<class T>
istream& operator>>(istream& is,vector<T>& vec);
template<class T,size_t size>
istream& operator>>(istream& is,array<T,size>& vec);
template<class T,class L>
istream& operator>>(istream& is,pair<T,L>& p);
template<class T>
ostream& operator<<(ostream& os,vector<T>& vec);
template<class T,class L>
ostream& operator<<(ostream& os,pair<T,L>& p);
template<class T>
istream& operator>>(istream& is,vector<T>& vec){ for(T& x: vec) is>>x;return is; }
template<class T,class L>
istream& operator>>(istream& is,pair<T,L>& p){ is>>p.first;is>>p.second;return is; }
//template<class T>
//ostream& operator<<(ostream& os,vector<T>& vec){ os<<vec[0];rep(i,1,vec.size())os<<' '<<vec[i];return os; }
//template<class T>
//ostream& operator<<(ostream& os,deque<T>& deq){ os<<deq[0];rep(i,1,deq.size())os<<' '<<deq[i];return os; }
template<class T,class L>
ostream& operator<<(ostream& os,pair<T,L>& p){ os<<p.first<<" "<<p.second;return os; }

inline void in(){}
template <class Head,class... Tail>
inline void in(Head&& head,Tail&&... tail){ cin>>head;in(move(tail)...); }
template <class T>
inline bool out(T t){ cout<<t<<'\n';return 0; }
inline bool out(){ cout<<'\n';return 0; }
template <class Head,class... Tail>
inline bool out(Head head,Tail... tail){ cout<<head<<' ';out(move(tail)...);return 0; }

template<typename T>
vector<T> make_v(size_t a){ return vector<T>(a); }

template<typename T,typename... Ts>
auto make_v(size_t a,Ts... ts){
	return vector<decltype(make_v<T>(ts...))>(a,make_v<T>(ts...));
}
template<typename T,typename V>
typename enable_if<is_class<T>::value==0>::type
fill_v(T &t,const V &v){ t=v; }

template<typename T,typename V>
typename enable_if<is_class<T>::value!=0>::type
fill_v(T &t,const V &v){
	for(auto &e:t) fill_v(e,v);
}//http://beet-aizu.hatenablog.com/entry/2018/04/08/145516

#define rep(...) _vcppunko4((__VA_ARGS__,_trep4,_trep3,_trep2,_rep1))((__VA_ARGS__))
#define rrep(...) _vcppunko4((__VA_ARGS__,_trrep4,_trrep3,_trrep2,_rrep1))((__VA_ARGS__))
#define each(v) for(auto &i:v)
#define lin(...) lint __VA_ARGS__;in(__VA_ARGS__)
#define stin(...) string __VA_ARGS__;in(__VA_ARGS__)
#define vin(type,name,size) vector<type> name(size);in(name)
#define fi i.first
#define se i.second
#define YES(c) cout<<((c)?"YES\n":"NO\n"),0
#define Yes(c) cout<<((c)?"Yes\n":"No\n"),0
#define o(p) cout<<p<<endl,0
#define deb(p) cerr<<p<<endl,0
#define dd(n) cout<<fixed<<setprecision(n)

#define inf linf

//(T,f,e):(type,乗せる関数,その単位元)
//ex1.(lint,min,inf)を乗せる普通のセグ木ならこう書く
//Segtree t(/*initial vector*/,[](lint a,lint b){return min(a,b);},inf)
//ex2.(lint,+,0)を乗せる区間加算addも区間更新updateもできる遅延セグ木ならこう書く
//Segtree t(/*initial vector*/,[](lint a,lint b){return a+b;},0,lt_add|lt_upd);

#define lt_non 0b00//normal Segtree
#define lt_add 0b01//range add
#define lt_upd 0b10//range update
class Segtree{
public:
	using T=lint;
	using func=function<T(T,T)>;

	int n,sz;
	vector<T> node,lazyA,lazyU;
	vector<bool>lazyUFlag;
	int lazytype;

	//inline lint f(lint x,lint y){ return x|y; }
	func f;
	T e;

	Segtree(vector<T> v,func f,T e,int lazytype=lt_non):f(f),e(e),lazytype(lazytype){
		sz=v.size();n=1;
		while(n<sz)n<<=1;
		node.resize(2*n,e);
		if(lazytype&lt_add)lazyA.resize(2*n);
		if(lazytype&lt_upd)lazyU.resize(2*n),lazyUFlag.resize(2*n);
		rep(sz)node[n+i]=v[i];
		rrep(sz)node[i]=f(node[2*i],node[2*i+1]);
	}
	void eval(int k,int l,int r){
		if(lazytype&lt_add){
			if(!lazyA[k])return;
			node[k]+=lazyA[k];
			if(r-l>1){
				lazyA[2*k]+=lazyA[k]/2;
				lazyA[2*k+1]+=lazyA[k]/2;
			}
			lazyA[k]=0;
		}
		if(lazytype&lt_upd){
			if(!lazyUFlag[k])return;
			node[k]=lazyU[k];
			if(r-l>1){
				lazyU[2*k]=lazyU[2*k+1]=lazyU[k];
				lazyUFlag[2*k]=lazyUFlag[2*k+1]=1;
			}
			lazyUFlag[k]=0;
		}
	}
	T* at(int i){ return &node[i+n]; }//use like *tree.at(i)=x,tree.adjust(i);
	void adjust(int i){
		i+=n;while(i>>=1)node[i]=f(node[2*i],node[2*i+1]);
	}
	int update(int a,int b,T x,int k=1,int l=0,int r=-1){
		if(!(lazytype&lt_upd))return -1;
		if(r<0)r=n;
		eval(k,l,r);
		if(b<=l||r<=a)return 0;
		if(a<=l&&r<=b){
			lazyU[k]=x;
			lazyUFlag[k]=1;
			eval(k,l,r);
		} else{
			update(a,b,x,2*k,l,(l+r)/2);
			update(a,b,x,2*k+1,(l+r)/2,r);
			node[k] = min(node[2*k],node[2*k+1]);
		}
		return 0;
	}
	int add(int a,int b,T x,int k=1,int l=0,int r=-1){
		if(!(lazytype&lt_add))return -1;
		if(r<0)r=n;
		eval(k,l,r);
		if(b<=l||r<=a)return 0;
		if(a<=l&&r<=b)lazyA[k]+=(r-l)*x,eval(k,l,r);
		else{
			add(a,b,x,2*k,l,(l+r)/2);
			add(a,b,x,2*k+1,(l+r)/2,r);
			node[k]=f(node[2*k],node[2*k+1]);
		}
	}
	T query(int a,int b,int k=1,int l=0,int r=-1){
		if(r<0)r=n;
		if(r<=a||b<=l)return e;
		eval(k,l,r);
		if(a<=l&&r<=b)return node[k];
		return f(query(a,b,2*k,l,(l+r)/2),query(a,b,2*k+1,(l+r)/2,r));
	}
};//verified(DSL_2_F,DSL_2_G):http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=3604885#1


int DSL_2_A(){
	lint n,q,com,x,y;in(n,q);
	vector<lint>a(n,INT_MAX);
	Segtree tree(a,[](lint a,lint b){return min(a,b);},INT_MAX);
	rep(q){
		cin>>com>>x>>y;
		if(com)o(tree.query(x,++y));
		else *tree.at(x)=y,tree.adjust(x);
	}
	return 0;
}

int DSL_2_B(){
	lint n,q,com,x,y;in(n,q);
	vector<lint>a(n);
	Segtree tree(a,[](lint a,lint b){return a+b;},0);
	rep(q){
		cin>>com>>x>>y;--x;
		if(com)o(tree.query(x,y));
		else *tree.at(x)+=y,tree.adjust(x);
	}
	return 0;
}

int DSL_2_F(){
	lint n,q,com,s,t,x;in(n,q);
	vector<lint>a(n,INT_MAX);
	Segtree tree(a,[](lint a,lint b){return min(a,b);},INT_MAX,lt_upd);
	rep(q){
		in(com,s,t);++t;//0-indexed,half-closed
		if(com)o(tree.query(s,t));
		else in(x),tree.update(s,t,x);
	}
	return 0;
}

int DSL_2_G(){
	lint n,q,com,s,t,x;in(n,q);
	vector<lint> a(n);
	Segtree tree(a,[](lint a,lint b){return a+b;},0,lt_add);
	rep(q){
		in(com,s,t);--s;//0-indexed,half-closed
		if(com)o(tree.query(s,t));
		else in(x),tree.add(s,t,x);
	}
	return 0;
}

int main(){
	//DSL_2_A();
	DSL_2_B();
	//DSL_2_F();
	//DSL_2_G();
}

//sub-EOF
