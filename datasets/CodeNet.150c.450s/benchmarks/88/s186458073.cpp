#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<vector>
#include<set>
#include<list>
#include<queue>
#include<cmath>
#include<functional>
#include<algorithm>
using namespace std;


struct R{
	int h,w;
	R(int a,int b):h(a),w(b){}
	bool operator<(R a){
		if(h*h+w*w!=a.h*a.h+a.w*a.w)return h*h+w*w < a.h*a.h+a.w*a.w;
		return h<a.h;
	}
};
int main(){
	int h,w;
	while(cin>>h>>w,h|w){
		R ans(150,150),in(h,w);
		for(int i=1;i<=150;i++){
			for(int j=i+1;j<=150;j++){
				R t(i,j);
				if(in<t && t<ans)ans=t;
			}
		}
		cout<<ans.h<<' '<<ans.w<<endl;
	}
	return 0;
}