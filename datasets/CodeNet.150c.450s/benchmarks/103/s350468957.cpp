#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <vector>

using namespace std;

int solve(int n, int s, int d = 0, int ss = 0, int bn = 0){
	if(ss == s && n == d){
		return 1;
	}
	if(n == d || ss > s){
		return 0;
	}
	int count = 0;


	for(int i = bn; i <= 9; i++){
		count += solve(n, s, d+1, ss+i, i+1);
	}

	return count;
}

int main(){
	int n, s;

	while(cin >> n >> s){
		if(n == 0 && s == 0) break;
		cout << solve(n, s) << endl;
	}

	return 0;
}