#include <bits/stdc++.h>
#define INT(name) int name; scanf("%d",&name);
#define VINT(name,n) vector<int> name(n); for(int i = 0;i < n;i++) scanf("%d",&name[i]);

using namespace std;

int gcd_(int a,int b){
	if(a == b)	return a;
	int temp = a - b;
	if(temp < b)	swap(temp,b);
	return gcd_(temp,b);
}

int main(int argc, char const *argv[]){
	int a,b,gcd,lcm;
	while(cin >> a >> b){
		if(a < b)	swap(a,b);
		gcd = gcd_(a,b);
		lcm = a / gcd * b;
		printf("%d %d\n",gcd,lcm);
	}
}