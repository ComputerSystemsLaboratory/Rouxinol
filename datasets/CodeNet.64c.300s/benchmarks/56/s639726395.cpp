#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;

int main(){

	int n,year,month,day,sum;

	scanf("%d",&n);

	for(int loop = 0; loop < n; loop++){
		scanf("%d %d %d",&year,&month,&day);

		sum = 0;

		if(year % 3 == 0 || month % 2 == 1){
			sum += 20 - day;
		}else{
			sum += 19 - day;
		}

		for(int i = month+1; i <= 10; i++){
			if(year % 3 == 0 || i %2 == 1)sum += 20;
			else{
				sum += 19;
			}
		}

		for(int i = year+1; i < 1000; i++){
			if(i % 3 == 0)sum += 200;
			else{
				sum += 195;
			}
		}

		printf("%d\n",sum+1);

	}
	return 0;
}