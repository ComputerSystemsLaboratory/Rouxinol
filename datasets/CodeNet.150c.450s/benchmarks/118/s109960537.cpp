#include<iostream>
using namespace std;
int solve(int y,int m,int d){
	int res=0;
	if(y%3==0){
		res+=(10-m)*20+20-d;
	}else{
		if(m%2==0){
			res+=(19-d);
		}else{
			res+=(19-d);
		}
		m++;
		for(;m<11;m++){
			if(m%2==0){
				res+=20;
			}else{
				res+=19;
			}
		}
	}
	y++;
	for(;y<1000;y++){
		if(y%3==0){//allbig
			res+=20*10;
		}else{//big and small
			res+=20*5+19*5;
		}
	}
	res++;
	return res;
}


int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int y,m,d,ans;
		cin>>y>>m>>d;
		ans=solve(y,m,d);
		cout<<ans<<endl;
	}
}