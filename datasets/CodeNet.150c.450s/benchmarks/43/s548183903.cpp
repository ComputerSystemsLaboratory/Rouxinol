#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	int n, a, b, a_p, b_p;
	
	while(true){
		cin >> n;
		if(n == 0){
			break;
		}
		a_p = 0;
		b_p = 0;
		for(int i = 0; i < n; i++){
			cin >> a >> b;
			if(a > b){
				a_p += a + b;
			}else if(a == b){
				a_p += a;
				b_p += b;
			}else{
				b_p += a + b;
			}
		}
		printf("%d %d\n", a_p, b_p);
	}
	
	return 0;
}