#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>

#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(x=from;x<to;x++)

using namespace std;


int main(void){

int N;
double x[4], y[4];

	cin >> N;
	while( N--){
		rep(i,4) cin >> x[i] >> y[i];
		
		if((y[1]-y[0])*(x[3]-x[2]) == (y[3]-y[2])*(x[1]-x[0])) 
  	    	cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}