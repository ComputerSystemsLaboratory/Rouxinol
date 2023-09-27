#define _USE_MATH_DEFINES

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>

using namespace std;

typedef pair<long long int, long long int> P;
long long int INF = 1e18;
int DP[1100][1100] = {};


int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	
	for(int i = 0; i <= str1.size(); i++){
		DP[i][0] = i;
	}
	
	for(int i = 0; i <= str2.size(); i++){
		DP[0][i] = i;
	}
	
	for(int i = 1; i <= str1.size(); i++){
		for(int j = 1; j <= str2.size(); j++){
			DP[i][j] = min(DP[i - 1][j] + 1, DP[i][j - 1] + 1);
			if(str1[i - 1] == str2[j - 1]){
				DP[i][j] = min(DP[i][j], DP[i - 1][j - 1]);
			}else{
				DP[i][j] = min(DP[i][j], DP[i - 1][j - 1] + 1);
			}
		}
	}
	/*
	for(int i = 0; i <= str1.size(); i++){
		for(int j = 0; j <= str2.size(); j++){
			cout << DP[i][j] << " ";
		}
		cout << endl;
	}
	*/
	cout << DP[str1.size()][str2.size()] << endl;
	
	return 0;
}
