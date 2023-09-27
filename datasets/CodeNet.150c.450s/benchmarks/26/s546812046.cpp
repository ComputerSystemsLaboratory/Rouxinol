#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <functional>
#define rep(i,n) for (int i=0;i<(n);i++)

using namespace std;

int main(){
	int B, A;
	string str;
	cin >> A >> B;

	if (A < B){
		str = "a < b";
	}
	else if (B < A){
		str = "a > b";
	}
	else{
		str = "a == b";
	}

	cout <<str<< endl;
	return 0;
}