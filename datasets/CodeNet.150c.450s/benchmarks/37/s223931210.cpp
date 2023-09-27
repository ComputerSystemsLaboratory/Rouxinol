#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b,c,d,e,f,x,y;
	while(cin>>a>>b>>c>>d>>e>>f){
        x = (double)((e*c-b*f) / (a*e-b*d));
		y = (double)((-(d*c)+a*f) / (a*e-b*d));
		if(x==0)	x=0;
		if(y==0)	y=0;
    	cout<<setiosflags(ios::fixed)<<setprecision(3)<<x<<" "<<y<<endl;
    }
	return 0;
}