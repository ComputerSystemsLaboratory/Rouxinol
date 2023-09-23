#include<iostream>

using namespace std;

int main(){
	int n,m,p;
	while(cin>>n>>m>>p){
                if(n==m && m==p && n==0)break;
		int sum=0;
		int suc=0;
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			if(i==m)suc=x;
			sum+=x;
		}
		sum*=(100-p);
		if(suc!=0)cout<<sum/suc<<endl;
		else cout<<0<<endl;
	}
}