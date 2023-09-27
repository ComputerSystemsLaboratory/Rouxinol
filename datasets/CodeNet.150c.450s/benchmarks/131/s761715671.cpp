#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <list>
#include <queue>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <math.h>

#define ASCll 48 

#define PREP(i, m, n) for(int i = m; i < n; i++)
#define MREP(i, m, n) for(int i = m - 1; i >= n; i--)
using namespace std;

int stringToInt(string m, int n){
	int result = 0;
	for(int i = 0, j = n; i < n; i++, j--){
		int tmp = m[i] - ASCll;
		for(int k = j - 1; k > 0; k--){
			tmp *= 10;
		}
		result += tmp;
	}
	return result;
}

string intToString(int m, int n){
	string result;
	for(int i = 0; i < n; i++){
		int tmp = m % 10 + ASCll;
		result.insert(result.begin(), 1, tmp);
		m /= 10; 
	}
	return result;
}

int main(){
	string m;
	int n = 0;
	while(cin >> m >> n && (m != "0" || n != 0)){
		//桁数合わせ
		if(m.size() != n){
			int tmp = m.size();
			for(int i = 0; i < n - tmp; i++){
				m.insert(m.begin(), 1, '0');
			}
		}
		string stResult = m;
		vector<int> result;
		result.push_back(stringToInt(stResult, n));
		int index = 0;
		bool hit = false;
		while(1){
			//降順ソート
			sort(stResult.begin(), stResult.end(), greater<int>());
			int max = stringToInt(stResult, n);
			//昇順ソート
			sort(stResult.begin(), stResult.end());
			int min = stringToInt(stResult, n);
			
			int iResult = max - min;

			result.push_back(iResult);

			stResult = intToString(iResult, n);

			for(int i = 0; i < result.size() - 1; i++){
				if(result[i] == iResult){
					index = i;
					hit = true;
					break;
				}
			}

			if(hit)break;
		}
		cout << index << " " << result[result.size() - 1] << " " << result.size() - 1 - index << endl;
	}
	return 0;
}