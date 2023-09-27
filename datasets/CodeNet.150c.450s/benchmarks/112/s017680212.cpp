
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <stack>
#include <cctype>
#include <complex>
#include <vector>
#include <algorithm>

using namespace std;


bool solve(){
	int n;
	cin>> n;
	if(!n) return false;

	char a[2][1<<10];
	for(int i=0;i<n;i++){
		cin>> a[0][i]>> a[1][i];
	}

	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		char in;
		cin>> in;
		for(int j=0;j<n;j++){
			if(in==a[0][j]){
				in=a[1][j];
				break;
			}
		}
		cout<< in;
	}
	cout<<endl;
	
	return true;
}

int main(){
	cout.setf(ios::fixed);
	cout.precision(10);
	while(solve()){};

	return 0;
}

 