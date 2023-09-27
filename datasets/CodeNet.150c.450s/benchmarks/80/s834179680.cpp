#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <stack>
#include <queue>

using namespace std;
int main(){
	int ab[10]={0};
	int ta=0,tb=0;
	

	for(int i=0;i<8;i++){
		cin >> ab[i];
	}

	for(int i=0;i<8;i++){
		if(3<i){
			tb+=ab[i];
		}
		
		else ta+=ab[i];
	}

	if(ta>tb){
		cout << ta << endl;
	}
	else cout << tb << endl;
	return 0;
}