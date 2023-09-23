#include<iostream>
using namespace std;

int a[10],x[11][11][10];

int dfs(int B,int C,int m){//a[m]????????????????£????
	if(m==10){
		return 0;
	}else if(x[B][C][m]>=0){
		return x[B][C][m];
	}else if(a[m]>B){
		if(dfs(a[m],C,m+1)==0){
			x[B][C][m]=0;
			return 0;
		}else if(a[m]>C){
			if(dfs(B,a[m],m+1)==0){
				x[B][C][m]=0;
				return 0;
			}else{
				x[B][C][m]=1;
				return 1;
			}
		}else{
			x[B][C][m]=1;
			return 1;
		}
	}else if(a[m]>C){
		if(dfs(B,a[m],m+1)==0){
			x[B][C][m]=0;
			return 0;
		}else{
			x[B][C][m]=1;
			return 1;
		}
	}else{
		x[B][C][m]=1;
		return 1;
	}
}

int main(){
	int n;
	cin>>n;
	for(int q=0;q<n;++q){
		for(int i=0;i<10;++i){
			cin>>a[i];
			a[i];
		}
		for(int i=0;i<11;++i){
			for(int j=0;j<11;++j){
				for(int k=0;k<10;++k){
					x[i][j][k]=-1;
				}
			}
		}
		if(dfs(0,0,0)==0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}