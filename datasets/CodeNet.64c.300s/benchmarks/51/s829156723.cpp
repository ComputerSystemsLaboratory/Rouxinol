/*Filename: aoj0019.cpp
 *Author: Mushiyo
 */

#include <iostream>

using namespace std;

long long factorial(int n){
	long long result = 1;

	for(int i = 1; i <= n; ++i){
		result *= i;
	}

	return result;
}

int main(){
	int n = 0;

    while(cin >> n){
        cout << factorial(n) << endl;
    }

	return 0;
}