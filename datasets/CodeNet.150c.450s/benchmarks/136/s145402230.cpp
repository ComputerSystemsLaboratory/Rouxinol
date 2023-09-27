#include<iostream>
#include<cstdio>
using namespace std;
int gcd(int a,int b)
{
	int c;
	if(a<b){
		a+=b;
		b=a-b;
		a-=b;
	}
	while(b!=0){
		c=a%b;
		a=b;
		b=c;
	}
	return a;
}
int lcm( int m, int n )
{
	if ( ( 0 == m ) || ( 0 == n ) )
		return 0;
	return ((m / gcd(m, n)) * n);
}
int main(){
	int a,b,i,j,t;
	while(scanf("%d%d",&a,&b)!=EOF){
		cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;
	}
return 0;
}