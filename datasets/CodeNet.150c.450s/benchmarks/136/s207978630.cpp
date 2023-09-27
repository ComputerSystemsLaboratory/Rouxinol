#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#define shosu(x) fixed<<setprecision(x)
using namespace std;
int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}

int lcm(int a,int b){
	return (a/gcd(a,b))*b;
}

int main(){
	int x,y;
	while(cin>>x>>y){
		cout<<gcd(x,y)<<' '<<lcm(x,y)<<endl;
	}
}