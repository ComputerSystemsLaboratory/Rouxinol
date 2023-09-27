#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>

using namespace std;

#define error 1e-10

int main(){
	double x[5],y[5];
	int n;
	double parallel1,parallel2;

	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=1;j<5;j++)
			cin>> x[j]>> y[j];
		parallel1=(y[2]-y[1])/(x[2]-x[1]);
		parallel2=(y[4]-y[3])/(x[4]-x[3]);
		if(x[2]-x[1] == 0 && x[4]-x[3] == 0)  cout<<"YES"<<endl;
		else (fabs(parallel1-parallel2)<error ) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
	}
	return 0;
}