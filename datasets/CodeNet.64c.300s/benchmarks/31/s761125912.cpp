#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main(){

	int table[31],tmp;

	for(int i = 1; i <= 30; i++)table[i] = 0;

	for(int i = 0; i < 28; i++){
		scanf("%d",&tmp);
		table[tmp] = 1;
	}

	for(int i = 1; i <= 30; i++){
		if(table[i] == 0)printf("%d\n",i);
	}

    return 0;
}