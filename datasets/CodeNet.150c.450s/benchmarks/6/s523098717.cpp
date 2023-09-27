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
	int B, A, C;
	string str;
	cin >> A >> B >> C;

	if (A < B && B < C){
		str = "Yes";
	}
	else{
		str = "No";
	}
	

	cout <<str<< endl;
	return 0;
}