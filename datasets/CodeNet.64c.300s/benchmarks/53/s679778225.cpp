#include<stdio.h>
using namespace std;
int a = 0,b = 0,c = 0;
int d = 0;
int main(){
    scanf("%d %d %d", &a, &b, &c);
 for (a;a <= b;a++) {
		if (c % a == 0) {
			d++;
		}
	}
	printf("%d\n",d);
}
