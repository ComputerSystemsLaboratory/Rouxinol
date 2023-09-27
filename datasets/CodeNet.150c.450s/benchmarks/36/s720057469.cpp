#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
#define rep(x,to) for(x=0;x<to;x++)
#define rep2(x,from,to) for(x=from;x<to;x++)

using namespace std;


int main(void){

int dd,i;	

	while(cin >> dd){
		int ws = 600 /dd;
		int ss =0;
		rep2(i,1,ws){
			ss += dd * i * dd * i * dd; 
		}
		cout << ss << endl;
	}
	return 0;
}