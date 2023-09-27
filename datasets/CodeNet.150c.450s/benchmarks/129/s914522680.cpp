#include<iostream>
using namespace std;
int main(){
int	c,r,x[100][100] = {}, y[100][100] = {},i,j,k,l,m,n,sum1=0,sum2=0,sum3=0;
cin>>c>>r;
for(i=0;i<c;i++){
	for(j=0;j<r;j++){
		cin>>x[i][j];
	}
}
for(k=0;k<c;k++){
	for(l=0;l<r;l++){
		sum1+=x[k][l];
		sum3+=x[k][l];
		cout<<x[k][l]<<" ";
	}
	cout<<sum1;
	sum1=0;
	cout<<endl;
}

for(m=0;m<r;m++){
	for(n=0;n<c;n++){
		sum2+=x[n][m];
		
	}
	cout<<sum2<<" ";
	sum2=0;
}

cout<<sum3<<endl;
return 0;
}