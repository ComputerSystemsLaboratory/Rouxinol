#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

int number[1000000], l;
string a;

int substruct()
{
	sort(number, number + l, greater<int>());
	int max_num = 0, min_num = 0;
	for(int i = 0; i < l; i++){
		max_num += number[i] * pow(10, (l-1-i));
		min_num += number[l-1-i] * pow(10, (l-1-i));
	}
	int ans = max_num - min_num;
	return ans;
}

void numbertoarray()
{
	int x = l - a.length();
	if(x > 0){
		for(int i = 0; i < l; i++){
			if (i < x) number[i] = 0;
			else number[i] = a[i - x] - '0';
		}
	} else {
		for(int i = 0; i < l; i++){
			number[i] = a[i] - '0';
		}
	}
}

string IntToString(int number)
{
	stringstream ss;
	ss << number;
	return ss.str();
}

int main()
{
	int result[21];
	while(1){
		cin >> a >> l;
		if(a == "0" && l == 0) break;
		int cnt = 1, gotanswer = 0;
		result[0] = stoi(a);
		while(1){
			numbertoarray();
			result[cnt] = substruct();
			for(int i = cnt - 1; i >= 0; i--){
				if(result[i] == result[cnt]){
					cout << i << ' ' << result[cnt] << ' ' << cnt - i << endl;
					gotanswer = 1;
					break;					  
				}
			}
			if(gotanswer == 1) break;
			a = IntToString(result[cnt]);
			cnt++;
		}
	}
	return 0;
}