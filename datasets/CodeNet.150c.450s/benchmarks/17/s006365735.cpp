#include <iostream>
#include <iomanip>
#include <list>
#include <map>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;


int main(){
	vector<int> input(5);
	while(cin >> input[0] >> input[1] >> input[2] >> input[3] >> input[4]){
		for(int i = 0; i < 5; i++){
			for(int j = i + 1; j < 5; j++){
				if(input[i] < input[j]){
					swap(input[i],input[j]);
				}
			}
		}

		for(int i = 0; i < input.size(); i++){
			if(i){
				cout << " ";
			}
			cout << input[i];
		}
		cout << endl;
	}
	return 0;
}