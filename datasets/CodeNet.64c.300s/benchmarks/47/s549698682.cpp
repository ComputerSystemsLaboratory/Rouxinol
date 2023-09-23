#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int poyo[101] = { 0 };
	int input;
	int max = 0;
	int i;
	while (scanf("%d",&input)!=EOF){
		poyo[input]++;
		if (max < poyo[input]) max = poyo[input];
	}

	for (i = 1; i < 101; i++){
		if (max == poyo[i]){
			cout << i << endl;
		}
	}

	return 0;
}