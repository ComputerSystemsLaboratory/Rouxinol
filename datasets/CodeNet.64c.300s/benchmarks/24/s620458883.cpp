#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <queue>
#include <sstream>
using namespace std;
int main(void){
	int n;
	while(cin >> n){
		if(n == 0)break;
		int a = 0; 
		int b = 0;
		for(int i = 0; i < n; i++){
			int r, l;
			cin >> l >> r;
			if(r < l){
				a += r+l;
			}else if(r > l){
				b += r+l;
			}else if(r == l){
				a += l;
				b += r;
			}
		}
		cout << a << " " << b << endl;
	}
}