#include <cstdio>

using namespace std;

int main(void)
{
	int n;
	
	while (scanf("%d", &n), n != 0){
		int cnt = 0;
		int o = 1000 - n;
		
		while(o >= 500){
			cnt++;
			o -= 500;
		}
		while(o >= 100){
			cnt++;
			o -= 100;
		}
		while(o >= 50){
			cnt++;
			o -= 50;
		}
		while(o >= 10){
			cnt++;
			o -= 10;
		}
		while(o >= 5){
			cnt++;
			o -= 5;
		}
		while(o >= 1){
			cnt++;
			o -= 1;
		}
		printf("%d\n", cnt);
	}
	
	return (0);
}