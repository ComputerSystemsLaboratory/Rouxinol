#include<iostream>
using namespace std;

int gcd(int x,int y);

int main(){
	int n,m;
	int x,y;
	cin >> n >> m;
	if(n < m){
		x = m;
		y = n;
	}else{
		x = n;
		y = m;
	}
	cout << gcd(x,y) << endl;
}

int gcd(int x,int y){
	if(y != 0){
		return gcd(y,x%y);
		}else{
		return x;
	}
}