#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char **argv)
{
	int *a = (int *)calloc(31, sizeof(int)), tmp;
	
	while(cin >> tmp){
		a[tmp]++;
	}
	
	for(int i = 1,f = 0; i <= 30; i++){
		if(a[i] != 1){
			cout << i << endl;
			f++;
			if(f == 2){
				break;
			}
		}
	}
	
	free(a);
	
	return 0;
}