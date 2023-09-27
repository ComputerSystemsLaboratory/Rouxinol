#include <cstdio>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <vector>
#include <iostream>

using namespace std;

#define MAX_N 1000000

int N;
int inf = 1000000000;

int d[MAX_N+1], d2[MAX_N+1]; // ?????????j??¨?????????????????????????°??????°

int calc_sn(int n){
	return n*(n+1)*(n+2)/6;
}

int main() {
	d[0] = 0;
    for(int i = 1; i <= MAX_N; i++){
    	d[i] = inf;
       	for (int j = 1; ; j++)
        {
        	if(i < calc_sn(j)) break;
            d[i] = min(d[i], d[i-calc_sn(j)]+1);
        }
    }
    d2[0] = 0;
    for(int i = 1; i <= MAX_N; i++){
    	d2[i] = inf;
       	for (int j = 1; ; j++)
        {
        	if(i < calc_sn(j)) break;
        	if(calc_sn(j) % 2 == 0) continue;
            d2[i] = min(d2[i], d2[i-calc_sn(j)]+1);
        }
    }
    while(1){
    	cin >> N;
    	if(N == 0) break;
    	cout << d[N] << " " << d2[N] << endl;
    }
    return 0;
}