#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char **argv)
{
	int tmp;
	int *array = (int *)calloc(1000, sizeof(int));
	
	while(cin >> tmp){
		array[tmp]++;
	}
	
	tmp = 0;
	for(int i = 0; i < 1000; i++){
		if(tmp < array[i]){
			tmp = array[i];
		}
	}
	
	for(int i = 0; i < 1000; i++){
		if(array[i] == tmp){
			cout << i << endl;
		}
	}
	
	free(array);
	return 0;
}