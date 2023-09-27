#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main(){
	int a1,a2,a3,a4,b1,b2,b3,b4,A=0,B=0;
	scanf("%d %d %d %d",&a1,&a2,&a3,&a4);
	scanf("%d %d %d %d",&b1,&b2,&b3,&b4);
	A = a1 + a2 + a3 + a4;
	B = b1 + b2 + b3 + b4;
	if(A > B){
		printf("%d\n",A);
	}else{
		printf("%d\n",B);
	}

    return 0;
}