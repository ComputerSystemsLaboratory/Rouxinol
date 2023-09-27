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
	long long out;
	int n;
	while(cin >> n){
		out = 1;
		for(int i = 0; i <= n; i++){
			if(i){
				out *= i;
			}
		}

		cout << out << endl;
	}

	return 0;
}