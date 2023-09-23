#include<iostream>
using namespace std;
int main(){
	int r,c,x[101][101],j,i,k,l,m,n,o,p,y,kazane,goukei,max,a[101];
	cin>>r>>c;
	goukei=0;
	max=0;
	y=0;
	kazane=0;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cin>>x[i][j];
		}
	}
	for(k=0;k<r;k++){
		goukei=0;
		for(l=0;l<c;l++){
			cout<<x[k][l];
			if(l<c-1){
				cout<<" ";
			}
			goukei=goukei+x[k][l];
		}
		a[y]=goukei;
		cout<<" "<<goukei<<endl;
		y=y+1;
	}
	for(m=0;m<c;m++){
		max=0;
		for(n=0;n<r;n++){
			max=max+x[n][m];
		}
		cout<<max<<" ";
	}
	for(o=0;o<y;o++){
		kazane=kazane+a[o];
	}
	cout<<kazane<<endl;
	return 0;
}