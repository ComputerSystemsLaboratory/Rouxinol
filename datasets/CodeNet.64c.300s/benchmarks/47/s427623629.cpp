#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main(){
	int ary[100];
	int hikaku[100];
	int n;
	int a = 0;
	
	for(int i = 1; i <= 100; i++){
		ary[i] = i;
		hikaku[i] = 0;
	}

	while(scanf("%d",&n) != EOF){

		for(int i = 1; i <= 100; i++){

			if(ary[i] == n){
				hikaku[i]++;
				a = max(a,hikaku[i]);
			}
		}

	}

	for(int i = 1; i <= 100; i++){
		
		if(a == hikaku[i]){
			cout << i << endl;
		}
	}

	return 0;
}