#include<string>
#include<cstdio>
#include<iostream>

using namespace std;
 
int main(){
	int n;
	double x[6],y[6];

	cin >>n;
	while(n--){
		cin >>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2]>>x[3]>>y[3];
		
		x[4]=x[0]-x[1];
		y[4]=y[0]-y[1];
		x[5]=x[2]-x[3];
		y[5]=y[2]-y[3];

		if(x[4]*y[5]-x[5]*y[4]) cout<< "NO" << endl;
		else cout<<"YES" << endl;
    }
 
    return 0;
}