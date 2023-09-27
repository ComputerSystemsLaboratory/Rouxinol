#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cmath>

#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(x=from;x<to;x++)

using namespace std;


int main(void){

int mm,dd;
int lday[] = {31,29,31,30,31,30,31,31,30,31,30,31};
string yob[7] = {"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
	
	while(cin >> mm >> dd ){
		if(mm == 0) break;
		int wkdd=dd;
		if( mm > 1) rep(i,mm-1) wkdd += lday[i];
//		cout << wkdd << endl;
		wkdd = wkdd % 7;
		cout <<  yob[wkdd] << endl;;
			
	}
	return 0;
}