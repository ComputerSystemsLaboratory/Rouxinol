#include<iostream>
#include<cstdio>
#include <algorithm>
#include <functional>
#include <vector>

using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int stu[31] = {0};
	int i,n;

	for(i=0; i<28; i++){

		cin >> n;
		stu[n] = 1;
	}

	for(i=1; i<=30; i++){

		if(stu[i] == 0) cout << i << "\n";
	}
	
	return 0;
}