#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
	int a,b,c;
	while(cin >>a >>b){
	c = a+b;
	int ret = 1;
	for(int i=1;;i++){
		if( c/pow(10,i)>=1){
			ret++;
		}else{
			break;
		}
	}
	cout <<ret <<endl;
    }
	return 0;
}