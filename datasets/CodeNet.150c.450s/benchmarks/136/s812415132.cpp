#include<stdio.h> 
long long GCD(long long int A,long long B) {
	if(B%A==0) 
		return A;
	else 
	{ 
		long long Temp=A; 
		A=B%A; 
		B=Temp; 
		return GCD(A,B); 
	} 
} 
int main() { 
	long long a,b; 
	long long n1,n2; 
	while(scanf("%lld%lld",&a,&b)!=EOF) { 
		if(a<b) 
			n1=GCD(a,b); 
		else 
			n1=GCD(b,a); 
		
		n2=a*b/n1; 
		
		printf("%lld %lld\n",n1,n2); 
	} 
}