#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int a[10];

bool dfs(int i, int left, int right){
	//cout << left << " " << right << " " << i << endl;
	if(i == 10) return true;
	bool answer = false;
	if(left < a[i]){
		answer = dfs(i+1, a[i], right);
	}
	if(right < a[i]){
		answer = dfs(i+1, left, a[i]);
	}

	return answer;
}


int main(){
	int N;
	cin >> N;
	for(int i = 0;i < N;i++){
		for(int j = 0; j < 10;j++){
			cin >> a[j];
		}
		if(dfs(0,0,0)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}