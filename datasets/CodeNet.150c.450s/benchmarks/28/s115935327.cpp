#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <climits>
using namespace std;


long n, k;
long *w;
long daisu, tsumi;

long checkDaisu(long p){
	for(long i = daisu = tsumi = 0; i < n; i++){
		tsumi += w[i];
		if(tsumi > p){
			i--;
			daisu++;
			tsumi = 0;
			
			if(daisu > k){
				break;
			}
		}
	}
	return ++daisu;
}

int main() {
    scanf("%ld %ld", &n, &k);
	
	long min = 1, max = 0;
	w = new long[n];
    for(int i = 0; i < n; i++){
        scanf("%ld", &w[i]);
        max += w[i];
    }
	
    while(1){
		long p = (min+max)/2;
		if(checkDaisu(p) > k){
			min = p;
		}else{
			max = p;
		}
		
		if(max - min <= 1){
			break;
		}
	}
	
	printf("%ld\n", checkDaisu(min) <= k ? min : max);
	
    return 0;
}