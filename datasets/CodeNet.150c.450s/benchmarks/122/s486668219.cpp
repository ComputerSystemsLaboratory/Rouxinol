#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <queue>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <list>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <map>
#define INFTY (1<<30)

using namespace std;

int h = 0, a[2000000+1];

void maxHeapify( int i) {
	int l = 2*i, r = 2*i+1;
	int largest;
	if( l <= h && a[l] > a[i]) largest = l;
	else largest = i;
	if( r <= h && a[r] > a[largest]) largest = r;
	
	if( largest != i) {
		swap(a[i], a[largest]);
		maxHeapify(largest);
	}
	return;
}

void increaseKey(int i, int k) {
	if( k < a[i]) return;
	a[i] = k;
	while( i > 1 && a[i/2] < a[i]) {
		swap(a[i], a[i/2]);
		i = i/2;
	}
}

int extract() {
	if(h < 1) return -INFTY;
	int max = a[1];
	a[1] = a[h--];
	maxHeapify(1);
	return max;
}

int main(){
	priority_queue<int> PQ;
	while(1) {
		char str[10];
		int k;
		scanf("%s", str);
		if(str[0] == 'e' && str[1] == 'n') break;
		else if(str[0] == 'i') {
			cin >> k;
			PQ.push(k);
		} else {
			cout << PQ.top() <<endl;
			PQ.pop();
		}
	}
	return 0;
}