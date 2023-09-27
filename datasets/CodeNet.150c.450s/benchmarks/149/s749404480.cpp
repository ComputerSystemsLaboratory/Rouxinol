#include<iostream>
using namespace std;
int set[10002];
int find(int);
int main(){
	int n,q;
	cin>>n>>q;
	for(int i=0;i<=n;i++)
		set[i]=i;
	int qu,x,y;
	for(int i=0;i<q;i++){
		cin>>qu>>x>>y;
		if(qu){
			if(find(x)==find(y))
				cout<<1<<endl;
			else cout<<0<<endl;
		}else{
			set[find(x)]=find(y);
		}
	}
	return 0;
}
int find(int x){
	return x==set[x]?x:set[x]=find(set[x]);
}

