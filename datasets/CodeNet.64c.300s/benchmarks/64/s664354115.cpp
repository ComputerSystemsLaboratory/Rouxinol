#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <string>
#define rep(i,o,u) for(int i = o;i < u; i++)
using namespace std;
int gcd (int a,int b){
	if(a < b) swap(a,b);
	int temp;
	while(a%b != 0){
		temp = b;
		b = a%b;
		a = temp;
	}
	return b;
}
int main(){
	int a,b;
	cin >> a >> b;
	cout << gcd(a,b) << endl;
	return 0;
}