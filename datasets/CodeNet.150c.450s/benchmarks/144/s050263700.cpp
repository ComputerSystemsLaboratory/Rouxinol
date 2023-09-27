#include <iostream>
#include<cstdlib>
#include<queue>
#include<set>
#include<vector>
#include<stack>
#include<map>
#include<string>
#include<algorithm>
#include<cmath>
#include<cstdio>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define mp make_pair
#define pb push_back
#define P pair<int,int>
#define ll __int64
#define __int64 long long

struct Mat{
	public:
	vector<vector<ll> >t;
	int g;//行
	int r;//列
	Mat(int a,int b){
		t.resize(a);
		for(int i=0;i<a;i++)t[i].resize(b);
		g=a;
		r=b;
	}

	Mat kakeru(Mat a,Mat b){
		if(a.r!=b.g)return Mat(0,0);//異常終了
		
		Mat ret(a.g,b.r);

		for(int i=0;i<a.g;i++){
			for(int j=0;j<b.r;j++){
				ll tmp=0;
				for(int k=0;k<a.r;k++){
					tmp=tmp+a.t[i][k]*b.t[k][j];

				}
					//cout<<i<<" "<<j<<endl;
				ret.t[i][j]=tmp;
			}
		}
		return ret;
	}

};



int n,m,l;

int main(){
	cin>>n>>m>>l;
	Mat a(n,m),b(m,l);	
	rep(i,n){
		rep(j,m)cin>>a.t[i][j];
	}
	
	rep(i,m){
		rep(j,l)cin>>b.t[i][j];
	}
	Mat c(n,l);

	c=c.kakeru(a,b);
	
	rep(i,n){
		rep(j,l){
			cout<<c.t[i][j];
			if(j<l-1)cout<<" ";
		}	
		cout<<endl;
	}
	
	return 0;
}

