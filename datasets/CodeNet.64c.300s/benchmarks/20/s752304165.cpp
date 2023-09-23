#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#define rep(i,a,n) for(int i=a;i<n;i++)
using namespace std;

int main(void){
	int d,sum;
	while( cin >> d ){
		sum = 0;
		for(int i=0;i < 600;i+=d){
			sum += i*i;
		}
		cout << sum*d << "\n";
	}
	return 0;
}