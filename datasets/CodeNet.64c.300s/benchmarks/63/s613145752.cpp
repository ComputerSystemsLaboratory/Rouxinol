#include<iostream>
using namespace std;
int gcdf(unsigned long long int a,unsigned long long int b);
int gcd(unsigned long long int a,unsigned long long int b);

int main(){
 	unsigned long long int a,b;
	unsigned long long int G,L;
	 
	while(cin>>a>>b){
		G=gcd(a,b);
		L=(a*b)/G;
		cout<<G<<" "<<L<<endl;
		
}
}
	
int gcdf(unsigned long long int a,unsigned long long int b)
{
	return (b == 0?a:gcdf(b,a%b));
}

int gcd(unsigned long long int a,unsigned long long int b)
{
	return (a>b?gcdf(a,b):gcdf(b,a));
}