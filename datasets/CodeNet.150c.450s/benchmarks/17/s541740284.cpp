#include <algorithm>
#include <string.h>
#include <cmath>
#include <stdio.h>

using namespace std;

int main()
{
	int a[5];
	while(1){
		for(int i = 0; i < 5; i++){
			if(scanf("%d",&a[i]) == EOF){
				return 0;
			}
		}
		sort(a,a+5);
		for(int i = 4; i > 0; i--){
			printf("%d ",a[i]);
		}
		printf("%d\n",a[0]);
	}
	return 0;
}