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

using namespace std;

int combi(int n, int s, vector<int> usedNum){
	int combiCount = 0;
	int tmp;
	bool usedFlag;

	n--;
	for(int i = 0; i <= 9; i++){
		usedFlag = false;
		
		for(int j = 0; j < usedNum.size(); j++){
			if(usedNum[j] == i) usedFlag = true; 
		}
		
		if(usedFlag){
			continue;
		}
		tmp = s;
		tmp -= i;
		if(n != 0){
			usedNum.push_back(i);
			combiCount += combi(n, tmp, usedNum);
		}
		else if(n == 0 && tmp == 0){
			usedNum.pop_back();
			return ++combiCount;
		}
	}

	usedNum.pop_back();
	return combiCount;
}


int main(){
	int n, s;
	int combiCount = 0;
	vector<int> usedNum;
	while(cin >> n >> s && (n != 0 || s != 0)){
		combiCount = combi(n, s, usedNum);
		cout << combiCount << endl;
	}
	return 0;
}