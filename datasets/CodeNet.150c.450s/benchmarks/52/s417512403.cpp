#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char **argv)
{
	int n, p = 1, *a = (int *)calloc(11, sizeof(int));
	
	while(cin >> n){
		if(n == 0){
			p--;
			cout << a[p] << endl;
		} else {
			a[p] = n;
			p++;
		}
	}
	
	free(a);
	return 0;
}