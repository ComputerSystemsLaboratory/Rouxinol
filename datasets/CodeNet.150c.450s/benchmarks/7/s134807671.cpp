#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <stdlib.h>

using namespace std;


int main(){

	int i,j;
	int top1=0, top2=0, top3=0;
	int temp1, temp2;

	for(i=0 ; i<10 ; i++){
		cin >> temp1;
		if(temp1 >= top1){
			top3 = top2;
			top2 = top1;
			top1 = temp1;
		}else if((temp1 < top1) && (temp1 >= top2)){
			top3 = top2;
			top2 = temp1;
		}else if(temp1 >= top3){
			top3 = temp1;
		}
	}

		cout << top1 << endl;
		cout << top2 << endl;
		cout << top3 << endl;

	return 0;
}