#include<iostream>
using namespace std;
int main(){
	int r,c,i,j,s,p[101][101],sum=0,w=0,t=0,m,n;
	cin>>r>>c;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cin>>p[i][j];
		}
	}
	for(i=0;i<r;i++){
		for(j=1;j<=c;j++){
			cout<<p[i][j-1]<<" ";
			sum+=p[i][j-1];
			w+=p[i][j-1];
			if(j==c){
				cout<<w<<endl;
				w=0;
			}
		}
	}
	for(m=1;m<=c;m++){
		for(n=0;n<r;n++){
			t+=p[n][m-1];
		}
		cout<<t<<" ";
		t=0;
		if(m==c)
			cout<<sum<<endl;
	}
	return 0;
}