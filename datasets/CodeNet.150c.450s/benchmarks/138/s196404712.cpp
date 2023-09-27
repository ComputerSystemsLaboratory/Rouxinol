#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y){
	if(x>y){
		swap(x,y);
	}
	int z = y%x;
	if(z==0){
		return x;
	} else {
		return gcd(z,x);
	}
}

int main(){
	int x,y;
	cin >> x >> y;
	int result = gcd(x,y);
	cout<<result<<endl;
}