//#define _USE_MATH_DEFINES
//#include <cmath>
#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//#include <iomanip>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <functional>
//#include <time.h>
//#include <sstream>
//#include <queue>
//#include <map>

using namespace std;

int n,s,ans = 0;

bool dfs(int i, int cnt, int sum,vector <int> v){
	//??±???????????¢?´¢
	
	

	if (cnt == n){
		if (sum == s) {
			ans++;
			//for (int j = 0; j < v.size(); j++){
			//	cout << v[j] << " ";
			//}
			//cout << endl;
		}
		return true;
	}

	if (i == 10)return true;


	for (int j = 0; i < v.size(); j++){
		if (v[j] == i)return true;
	}


	//nouse
	dfs(i + 1, cnt, sum, v);

	//use
	v.push_back(i);
	dfs(i + 1, cnt + 1, sum + i,v);

	return false;

}

int main(){

	vector <int> v;

	while (cin >> n >> s){
		if (n == 0)break;
		ans = 0;

		dfs(0, 0, 0, v);

		cout << ans << endl;
	}


	return 0;
}