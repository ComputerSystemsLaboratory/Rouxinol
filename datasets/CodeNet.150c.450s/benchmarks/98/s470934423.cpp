#include <bits/stdc++.h>
using namespace std;
#define r(w,e) for(int w=0;w<e;w++)
int main(){
	int a,b,_a[100],_b[100],d;
	TOP:
	while(cin>>a>>b,a+b){
		r(i,a)cin>>_a[i];r(i,b)cin>>_b[i];
		if((d=accumulate(_a,_a+a,0)-accumulate(_b,_b+b,0))%2!=0){cout<<"-1"<<endl;goto TOP;}
		d/=2;
		r(p,100)r(i,a)if(_a[i]==p)r(j,b)if(_b[j]==p-d){cout<<_a[i]<<" "<<_b[j]<<endl;goto TOP; }
		cout<<"-1"<<endl;
	}
}