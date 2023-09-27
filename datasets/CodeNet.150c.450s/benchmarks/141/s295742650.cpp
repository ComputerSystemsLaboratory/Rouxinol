#include<iostream>
using namespace std;
double x[3],y[3],xp,yp;
int solve(){
	int tes=0,i,j;
	for(i=0,j=2;i<3;j=i++){
		if(((yp>y[i]&&yp<=y[j])||(yp<=y[i]&&yp>y[j]))&&xp<=(x[i]-x[j])*(yp-y[i])/(y[i]-y[j])+x[i])
			tes++;
	}
	
	return tes%2==1;
}
int main(){
	while(cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2]>>xp>>yp){
		if(solve()==1)
			cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}