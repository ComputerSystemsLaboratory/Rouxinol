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

using namespace std;

int h, a[500000+1];

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

int main(){
	cin >> h;
	for( int i = 1; i <= h; i++) cin >> a[i];
	for( int i = h/2; i >= 1; i--) maxHeapify(i);
	for( int i = 1; i <= h; i++) cout << " " << a[i];
	cout <<endl;
	return 0;
}