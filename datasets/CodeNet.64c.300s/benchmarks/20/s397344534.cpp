/* All men have limits. They learn what they are and learn
   not to exceed them, I ignore mine. -Batman           */

#include <bits/stdc++.h>
//#include <Windows.h>
using namespace std;


int main(){

	int i,j;
	long long sum;
	int n;
	while(scanf("%d", &n) != EOF){
		i = 0;
		sum = 0;
		while( i != 600){
			sum += n*i*i;
			i += n;
		}
		printf("%lld\n", sum);
	}

return 0;
}