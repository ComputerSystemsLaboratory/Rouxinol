#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<map>
#include<string>
#include<algorithm>
#include<functional>
#define ll long long
#define inf  999999999
#define pa pair<int,int>

using namespace std;


struct segsum{
	//       1
	//   2        3
	// 4   5   6    7
	
	
	private:
	public:
	
	// (1<<15)=32768
	// 1<<16 = 65536
	// 1<<17 = 131072
	// 1<<18 = 262144
	
	int cor=(1<<17);
	
	vector<int> vec;
	
	void shoki1(){
		vec.resize(2*cor+3, 0);
	}
		void shoki2(){
			for(int i=cor-1;i>0;i--) vec[i]=vec[2*i]+vec[2*i+1];
		}
		
	void updadd(int x,int w){
		//x 項目に w加算
		x+=cor;
		vec[x]+=w;
		while(1){
			x/=2;
			if(x==0) break;
			vec[x]=vec[2*x]+vec[2*x+1];
		}
		
	}
	
	void updchan(int x,int w){
		//x項目をwに変更
		x+=cor;
		vec[x]=w;
		while(1){
			x/=2;
			if(x==0) break;
			vec[x]=vec[2*x]+vec[2*x+1];
		}
		
	}
	// [a,b)
	// k-th node
	// k no kukanha [l,r)
	int sum(int a,int b,int k=1,int l=0,int r=-10){
		if(r<0)r=cor;
		
	//	cout<<a<<" "<<b<<" "<<k<<" "<<l<<" "<<r<<endl;
		
		if(a<=l && r<=b){
			return vec[k];
		}
		if(r<=a || b<=l){
			return 0;
		}
		
		int v1=sum(a,b,k*2,l,(l+r)/2),v2=sum(a,b,k*2+1,(l+r)/2,r);
		return v1+v2;
	}
	
};


int main(){
segsum SE;
	
	SE.shoki1();
//	for(int i=0;i<SE.cor;i++){
//		SE.vec[i+SE.cor]=i;
//	}
	SE.shoki2();
	
	
	int n,q;
	cin>>n>>q;
	
	for(int i=0;i<q;i++){
	int a,b,c;
		cin>>a>>b>>c;
		
		if(a==0)SE.updadd(b,c);
		else cout<<SE.sum(b,c+1)<<endl;
	
	}
	return 0;
}



