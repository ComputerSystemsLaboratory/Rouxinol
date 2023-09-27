#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<stdio.h>
#define range(s,n) for(int i = s; i < n; i++)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
	int n;
	long double x1,x2,x3,x4,y1,y2,y3,y4;

	while(cin >> n){
		range(0,n){
			cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
			if( (y2 - y1) / (x2 - x1) == (y4 - y3) / (x4 - x3) )
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
}