#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<complex>
#include<iomanip>
 
#define EPS (1e-10)
using namespace std;
#define PI (3.1415926535)

int main(){
	int num[101] = {0};

	int n, max = -1;
	while(cin >> n){
		num[n]++;
		if(num[n] > max){
			max = num[n];
		}
	}

	for(int i = 1; i <= 100; i++){
		if(num[i] == max){
			cout << i << endl;
		}
	}


	return 0;
}