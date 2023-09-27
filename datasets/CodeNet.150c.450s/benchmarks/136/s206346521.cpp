#include <iostream>
#include <cstdio>
using namespace std;

template <typename T>
T gcd(T a , T b){
	if (b==0) return a;
	return gcd(b , a%b);
}

int main(){
	int a , b ;
	while(cin>>a>>b){
		printf("%d %d\n" , gcd(a,b) , (a/gcd(a, b)*b));
	}
	return 0;
}