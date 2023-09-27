#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
typedef struct{
	int h,w,d;
}rect;
bool cmp(rect a,rect b){
	if(a.d==b.d)
		return a.h<b.h;
	return a.d<b.d;
}
int main(){
	vector<rect> v;
	REP(i,1,150){
		REP(j,i+1,150){
			rect t;
			t.h=i;
			t.w=j;
			t.d=i*i+j*j;
			v.push_back(t);
		}
	}
	sort(v.begin(),v.end(),cmp);
	while(1){
		int h,w;
		cin>>h>>w;
		if(!h)break;
		rep(i,v.size()){
			if(h==v[i].h&&w==v[i].w){
				cout<<v[i+1].h<<" "<<v[i+1].w<<endl;
				break;
			}
		}
	}
	return 0;
}
