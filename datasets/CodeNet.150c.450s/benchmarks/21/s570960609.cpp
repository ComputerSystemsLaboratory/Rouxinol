#include<iostream>
using namespace std;

int x;

int cubic(int n){
	int ans = n * n * n;
	return ans;
}

int main(){
	cin >> x;
	int ans = cubic(x);
	cout << ans << endl;
}