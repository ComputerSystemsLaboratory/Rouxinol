//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0003&lang=jp
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

bool ok(int a, int b, int c){
	int arr[3];
	arr[0] = a, arr[1] = b, arr[2] = c;
	sort(arr, arr+3);
	return arr[2]*arr[2] == arr[0]*arr[0] + arr[1]*arr[1];
}


int main(){
	int n;
	cin >> n;
	int a,b,c;
	for(int i=0; i<n; i++){
		cin >> a >> b >>c;
		if(ok(a,b,c)) cout << "YES" << endl;
		else cout <<"NO" << endl;
	}
	return 0;
}