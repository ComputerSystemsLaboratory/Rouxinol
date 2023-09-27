#include<iostream>
#define _USE_MATH_DEFINES
#include<math.h>
#include<iomanip>
#include<string>
using namespace std;

int gcd(long long int m,long long int n){
	while(m!=n){
		if(m>n){m=m-n;
		}
		else n=n-m;
	}
	return m;
}
int lmc(long long int m,long long int n){
return m*n/gcd(m,n);
}

int main(){
long long int a,b;
while(cin>>a>>b){
	cout<<gcd(a,b)<<" "<<lmc(a,b)<<endl;

}


}