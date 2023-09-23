#include <cstdio>
using namespace std;

int main()
{
	int n;
	int day[100] = {0};
	
	day[0] = 0;
	day[1] = day[2] = 1;
	
	for(int i = 3; i < 50; i++){
		day[i] = day[i-1] + day[i-2] + day[i-3];
	}
	
	while(scanf("%d", &n), n != 0){
		int year;
		
		year = day[n+1] / 10 / 365;
		
		printf("%d\n", year + 1);
	}
	return(0);
}