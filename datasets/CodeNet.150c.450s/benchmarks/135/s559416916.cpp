#include<iostream>
#define rep(i,n) for(int i=0;i<n;i++)
#include<map>
#include<set>
using namespace std;
int main(){
	int n,m;
	while(cin>>n>>m,n||m){
		multiset<int> box;
		int y[1510],x[1510],s;
		map<int,int> mpx,mpy;
		x[0]=0;
		y[0]=0;
		for(int i=1;i<=n;i++){
			cin>>s;
			x[i]=x[i-1]+s;
		}
		for(int i=1;i<=m;i++){
			cin>>s;
			y[i]=y[i-1]+s;
		}
		for(int i=0;i<=n;i++)
		for(int j=i+1;j<=n;j++){
			if(mpx[x[j]-x[i]]==0)
			box.insert(x[j]-x[i]);
			mpx[x[j]-x[i]]++;
		}
		
		for(int i=0;i<=m;i++)
		for(int j=i+1;j<=m;j++){
			
			mpy[y[j]-y[i]]++;
		}
		int ans=0;
		set<int>::iterator ite=box.begin();
		while(ite!=box.end()){
			ans+=mpx[*ite]*mpy[*ite];
			ite++;
		}
		cout<<ans<<endl;
	}
	return 0;
}