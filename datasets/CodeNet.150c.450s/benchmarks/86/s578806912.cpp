#include<iostream>
#include<vector>
#include<map>
#define P pair<int,int>
using namespace std;
int main(){
int n,m,p;
while(cin>>n>>m>>p,n||m||p){
	int maisu=0,tmp,atari;
	int  ans=0;
	for(int i=0;i<n;i++){
		cin>>tmp;
		maisu+=tmp*100;
		if(i+1==m)atari=tmp;
	}
		//cout<<"p"<<p;
	if(atari==0)ans=0;

	else {
		ans=maisu*100;
		ans-=maisu*p;
		ans=ans/atari;
	}
	cout<<ans/100<<endl;
}
return 0;
}