#include <iostream>
using namespace std;

int main(){
	int n,m,p;
	while(cin>>n>>m>>p,n||m||p){
		int c,g=0,x,i;
		for(i=0;i<n;i++){
			cin>>x;
			g+=x;
			if(i+1==m) c=x;
		}
		g*=(100-p);
		if(c) cout<<g/c<<endl;
		else cout<<0<<endl;
	}
}