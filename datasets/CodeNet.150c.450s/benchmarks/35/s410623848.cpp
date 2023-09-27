#include <stdio.h>
#include<math.h>
using namespace std;

int main(){
	int n,maximum,sum;
	while(true){
		scanf("%d",&n);
		if(n == 0)break;

		int array[n];
		for(int i=0;i<n;i++)scanf("%d",&array[i]);
		maximum = -600000000;
		for(int k=0;k<n;k++){//?§????????????????
			sum = 0;
			for(int p=k;p<=n-1;p++){	//??????????????????
				sum += array[p];
				maximum = (maximum >= sum)? maximum:sum;
			}
		}
		printf("%d\n",maximum);
	}

    return 0;
}