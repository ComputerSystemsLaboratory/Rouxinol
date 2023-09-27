#include<iostream>
using namespace std;
int main(){
	double a[2],b[2],c[2],d[2];
	int n;
	cin >>n;
	for(int i=0; i<n; i++){
		cin >>a[0]>>a[1]>>b[0]>>b[1]>>c[0]>>c[1]>>d[0]>>d[1];
		b[0] = b[0]-a[0];
		b[1] = b[1]-a[1];
		d[0] = d[0]-c[0];
		d[1] = d[1]-c[1];
		if(d[1]*b[0] == b[1]*d[0]){cout<<"YES"<<endl;}
		else{cout<<"NO"<<endl;}
	}
}