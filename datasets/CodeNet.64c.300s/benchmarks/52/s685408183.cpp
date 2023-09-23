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

int combi(int n, int s, int usedNum = 0){
	int combiCount = 0;
	int tmp;
	n--;
	for(int i = usedNum; i <= 9; i++){
		tmp = s - i;		
		if(n != 0){
			combiCount += combi(n, tmp, i + 1);
		}
		else if(n == 0 && tmp == 0){
			return 1;
		}
	}
	return combiCount;
}


int main(){
	int n, s;
	int combiCount = 0;
	while(cin >> n >> s && (n != 0 || s != 0)){
		combiCount = combi(n, s);
		cout << combiCount << endl;
	}
	return 0;
}