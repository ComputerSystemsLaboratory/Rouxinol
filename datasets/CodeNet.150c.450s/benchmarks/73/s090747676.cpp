#include  <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
using namespace std;

template <typename T> class SegmentTree{
	public :
		int n;
		SegmentTree(int size,T o): out_of_range(o){
			for(n=1;n<size;n<<=1);
			data=vector<T>(2*n,out_of_range);
			lazy=vector<bool>(2*n,false);
		}

		void update(int a,int b,T x,int k,int l,int r){
			if(r<=a || b<=l) return;
			if(a<=l&&r<=b){data[k]+=x,lazy[k]=true;return;}
			if(lazy[k]) lazy_evaluate(k);
			update(a,b,x,k*2+1,l,(l+r)/2);
			update(a,b,x,k*2+2,(l+r)/2,r);
			data[k]=data[k*2+1]+data[k*2+2];
		}

		T query(int a,int b,int k,int l,int r){
			if(r<=a||b<=l) return out_of_range;
			if(a<=l&&r<=b)return data[k];
			if(lazy[k]) return (r-l)*data[k];
			T vl = query(a,b,k*2+1,l,(l+r)/2);
			T vr = query(a,b,k*2+2,(l+r)/2,r);
			return vl+vr;
		}
	private:
		vector<T> data;
		vector<bool> lazy;
		const T out_of_range;

		inline void lazy_evaluate(int k){
			data[k*2+1]+=data[k];lazy[k*2+1]=true;
			data[k*2+2]+=data[k];lazy[k*2+2]=true;
			lazy[k]=false;
		}
};

int main(void){
	int N,Q;
	cin >>  N >> Q;
	SegmentTree<int> rsq(N,0);

	for(int i=0;i<Q;i++){
		int type;
		cin >> type;
		if(type){
			int s,t;
			cin >> s >> t;
			s--,t--;
			cout << rsq.query(s,t+1,0,0,rsq.n) << endl;
		}else{
			int a,x;
			cin >> a >> x;
			a--;
			rsq.update(a,a+1,x,0,0,rsq.n);
		}
	}
	return 0;
}