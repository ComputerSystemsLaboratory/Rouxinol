#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <stdlib.h>

using namespace std;


int main(){
	string str, ans;
	int i;
	cin >> str;

	for(i=0 ; i<str.size() ; i++){
		ans += str[str.size()-i-1];
	}

	cout << ans << endl;
	return 0;
}