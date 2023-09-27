#include<stdio.h>
#include <string>
#include <iostream>
using namespace std;


int factorial_loop(long long n);

int main(void)
{
long long n;
long long result1;


cin>>n;

if(0<n&&n<21) ;
else return 0;

	result1 =factorial_loop(n);

//	cout<<(long long)result1<<endl;
	return 0;

}
int factorial_loop(long long n) {
    long long result = 1;
    long long k;

    for(k = 1; k <= n; k++) {
        result *= k;
		//
    }
	cout<<result<<endl;
    return result;
}