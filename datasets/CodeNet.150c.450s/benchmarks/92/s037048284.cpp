#include<iostream>
#include<string>
#include <algorithm>
#include<iomanip>
#include<cmath>
using std::cin; using std::string;
using std::cout; using std::endl;
using std::sort;
#define rep(X,Y) for(int (X)=0;(X)<(Y);++(X))
#define rept(X,Y,Z) for(int (X)=(Y);(X)<(Z);++(X))
#define repr(X,Y) for(int (X)=(Y);(X)>=0;--(X))
const double pi=3.141592653589793283462;
int main(){
    int a,b,c;
	while(cin>>a>>b){
	int co=1;
	c=a+b;
	while(1){
		if(c/10>=1){
			co+=1;
			c/=10;
		}
		else
			break;
	}
	cout<<co<<endl;
	co=1;
	}
	return 0;
}     