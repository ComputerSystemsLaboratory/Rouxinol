#include<stdio.h>
using namespace std;

int x = 0;
int i = 0;
int main()
{
scanf("%d",&x);
	while (1) {
	    if(x == 0){
	        break;
	    }
	    i++;
		printf("Case %d: %d\n", i, x);
		scanf("%d",&x);
	}
    return 0;
}

