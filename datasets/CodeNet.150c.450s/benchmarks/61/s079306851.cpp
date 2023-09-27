
#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
#include <stdlib.h>
#include <math.h>
#include <list>
#include <algorithm>

using namespace std;

int main(void){
	//FILE* fp_in = freopen("data.txt", "r", stdin);

	while(1) {
		int N, A, B, C, X;
		cin >> N >> A >> B >> C >> X;
		if( ( N == 0 ) &&
			( A == 0 ) &&
			( B == 0 ) &&
			( C == 0 ) && 
			( X == 0 ) ) break;
		vector<int> y;
		for(int i = 0; i < N; i++) {
			int y_i;
			cin >> y_i;
			y.push_back( y_i );
		}
		int ans = -1;
		int reel = 0;
		for(int i = 0; i < 10000 + 1; i++) {
			if( y.at(reel) == X ) reel ++;
			if( reel == y.size() ) {
				ans = i;
				break;
			}
			X = ( A * X + B ) % C;
		}
		cout << ans << endl;
	}

	//while(1){}
	return 0;
}