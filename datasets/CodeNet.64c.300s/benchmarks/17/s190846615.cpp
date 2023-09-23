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

	int x, y, s;

	while(1){
		cin >> x;
		cin >> y;
		cin >> s;

		if(x==0 && y==0 && s==0) break;

		int hold=0;

		int temp;
		for(int i=1 ; i<s ; i++){
			for(int j=1 ; j<s ; j++){
				temp = i*(100+x)/100 + j*(100+x)/100;
				if(temp == s){
					int temp2;
					temp2 = i*(100+y)/100 + j*(100+y)/100;
					if(temp2 > hold) hold = temp2;
				}
			}
		}

		cout << hold << endl;

	}


	return 0;
}