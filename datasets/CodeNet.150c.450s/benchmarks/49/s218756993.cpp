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
	int n;

	while(1){
		cin >> n;
		if(n == 0) break;

		int score[n];
		for(int i=0 ; i<n ; i++){
			cin >> score[i];
		}
		sort(score , score+n);
		
		int sum=0;
		for(int i=1 ; i<n-1 ; i++){
			sum += score[i];
		}
		sum = sum / (n-2);

		cout << sum << endl;
	}
	return 0;
}