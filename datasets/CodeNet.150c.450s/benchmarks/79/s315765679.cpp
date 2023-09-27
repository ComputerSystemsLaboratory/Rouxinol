#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <stdlib.h>
#include <vector>
#include <stack>

using namespace std;


int main(){

	int n, r;

	while(1){
		cin >> n;
		cin >> r;
		if(n==0 && r==0) break;

		int a[n];
		int temp[n];
		int count = n-1;
		for(int i=1 ; i<=n ; i++){
			a[count] = i;
			count--;
		}

		int p, c;
		for(int i=0 ; i<r ; i++){
			cin >> p >> c;
			for(int j=0 ; j<c ; j++){
				temp[j] = a[p-1+j];
			}
			for(int j=0 ; j<p-1 ; j++){
				temp[c+j] = a[j];
			}
			for(int j=c+p-1 ; j<n ; j++){
				temp[j] = a[j];
			}

			for(int j=0 ; j<n ; j++){
				a[j] = temp[j];
			}
		}
		cout << a[0] << endl;

	}

	return 0;
}