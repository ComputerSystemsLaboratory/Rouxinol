#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <ctime>
#include <string>
#include <unordered_set>
using namespace std;



int main(void){
	int n;
	string word;
	typedef unordered_set<string> set_t;
	set_t A;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> word;
		if(word == "find"){
			string S;
			cin >> S;
			if(A.count(S)){
				cout << "yes" << endl;
			}else{
				cout << "no" << endl;
			}
		}else{
			string S;
			cin >> S;
			A.insert(S);
		}
	}
	
    return 0;
}