#include <iostream>
#include <stdio.h>
using namespace std;
 
int main(){
	int n,i;
	long int a,max,min,sum;
	sum=0;
	cin >> n;
	cin >> a;
	max = a;
	min = a;
	sum = sum + a;

	for (i=1;i<n;i++) {
		cin >> a;
		if ( max < a ) {
			max = a;
		}
		if ( min > a ) {
			min = a;
		}
		sum = sum + a;
	} 
	printf("%ld %ld %ld\n",min,max,sum);
    return 0;
}