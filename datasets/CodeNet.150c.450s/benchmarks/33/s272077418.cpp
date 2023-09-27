
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

struct pai{
	int p;
	int q;
};


int main(void){
	//FILE* fp_in = freopen("data.txt", "r", stdin);

	while( 1 ) {
		int x, y, s;
		cin >> x >> y >> s;
		if( x == 0 && y == 0 && s == 0 ) break;

		vector<pai> pairs;
		for(int i = 1; i < s; i++) {
			for(int j = 1; j < s; j++) {
				if( (int)( (double)( i * ( 100.0 + x )) / 100.0 ) + (int)( (double)( j * ( 100.0 + x )) / 100.0 ) == s ) {
					pai np;
					np.p = i;
					np.q = j;
					pairs.push_back(np);
				}
			}
		}
		vector<int> v;
		for(int i = 0; i < pairs.size(); i++)
			v.push_back(  (int)((double)( pairs.at(i).p * ( 100.0 + y )) / 100.0 )+ (int)((double)( pairs.at(i).q * ( 100.0 + y )) / 100.0 ) );

		int max = 0;
		for(int i = 0; i < v.size(); i++)
			if( v.at(i) > max ) max = v.at( i );

		cout << max << endl;

	}

	//while(1){}
	return 0;
}