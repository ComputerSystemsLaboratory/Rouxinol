#include <iostream>
#include <cstdio>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>

#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){

	int n;
	int money[6] = {500,100,50,10,5,1};
	while(cin >> n, n){
		
		int change = 0;
		n = 1000 - n;
		rep(i,6){
			
			change += n / money[i];
			n = n % money[i];
		}
		cout << change << endl;
	}

	return 0;
}