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


int main(){
	string input = ""; 
	map<string, int> dictionary;

	cin >> input;
	dictionary.insert(pair<string, int>(input, 1));
	string maxString = input;
	int maxCount = 1;


	while(cin >> input){
		for(map<string, int>::iterator it = dictionary.begin(); it != dictionary.end(); it++){
			if(input != it->first){
				dictionary.insert(pair<string, int>(input, 1));
				if(maxString.length() < input.length()){
					maxString = input;
				}
			}
			else{
				it->second++;
				if(maxCount < it->second){
					maxCount = it->second;
				}
			}
		}
	}

	for(map<string, int>::iterator it = dictionary.begin(); it != dictionary.end(); it++){
		if(it->second == maxCount){
			cout << it->first;
			break;
		}
	}

	cout << " " << maxString << endl;
	return 0;
}