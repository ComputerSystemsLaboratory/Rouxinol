#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	int n, ave;
	int s[10000];
	while(true){
		cin >> n;
		if(n == 0){
			break;
		}
		for(int i = 0; i < n; i++){
			cin >> s[i];
		}
		sort(s, s + n);
		ave = 0;
		for(int i = 1; i < n - 1; i++){
			ave += s[i];
		}
		ave /= (n - 2);
		printf("%d\n", ave);
	}
	return 0;
}