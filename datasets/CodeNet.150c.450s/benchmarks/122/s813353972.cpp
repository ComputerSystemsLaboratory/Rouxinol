#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <ctime>
#include <string>
#include <queue>

using namespace std;

int main(void){
	priority_queue<int> Q;
	string S;

	cin >> S;
	while(S != "end"){
		if(S == "insert"){
			int num;
			cin >> num;
			Q.push(num);
		}else{
			int num = Q.top();
			Q.pop();
			cout << num << endl;
		}

		cin >> S;
	}

    return 0;
}