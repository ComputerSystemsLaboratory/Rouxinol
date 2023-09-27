#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;


int main(){
	int a , b ;
	while(cin>>a>>b){
		printf("%d %d\n" , __gcd(a,b) , (a/__gcd(a,b))*b);
	}
	return 0;
}