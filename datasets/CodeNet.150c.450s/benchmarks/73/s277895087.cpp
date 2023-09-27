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
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-10;
const int inf=1e8;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
typedef int SegT;
const int defvalue=0;
class SegTree{
	private:
		vector<SegT>val;
		int n;
		SegT combine(SegT a,SegT b){return a+b;}
	public:
		SegTree(int size){
			n=1;
			while(n<size)n<<=1;
			val=vector<SegT>(2*n,defvalue);
		}
		SegTree(const vector<SegT> &in){
			n=1;
			while(n<in.size())n<<=1;
			val=vector<SegT>(2*n,defvalue);
			for(int i=n-1+in.size()-1;i>=0;i--){
				if(n-1<=i)val[i]=in[i-(n-1)];
				else val[i]=combine(val[i*2+1],val[i*2+2]);
			}
		}
		void update(int i,SegT a){
			i+=n-1;
			val[i]+=a;
			while(i>0){
				i=(i-1)/2;
				val[i]=combine(val[i*2+1],val[i*2+2]);
			}
		}
		SegT query(int a,int b,int k=0,int l=0,int r=-1){//[a,b)
			if(r==-1)r=n;
			if(r<=a||b<=l)return defvalue;
			if(a<=l&&r<=b)return val[k];
			else return combine(query(a,b,k*2+1,l,(l+r)/2),query(a,b,k*2+2,(l+r)/2,r));
		}
		void tmp(){
			rep(i,val.size())cout<<" "<<val[i];cout<<endl;
		}
};

int main(){
	int n,q;
	cin>>n>>q;
	SegTree in(n);
	while(q--){
		int a,b,c;
		cin>>a>>b>>c;
		if(a==0)in.update(b-1,c);
		else cout<<in.query(b-1,c)<<endl;;
	}
}