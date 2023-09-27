#include <cstdio>

using namespace std;

const int date[] = {31,29,31,30,31,30,31,31,30,31,30,31};
const char week[7][10] = {"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};

int main(void){
	int m, d, res, i;
	while(1){
		scanf("%d%d",&m,&d);
		if(m == 0 && d == 0){
			break;
		}
		res = 0;
		for(i = 0;i < m - 1;i++){
			res += date[i];
		}
		res += d;
		printf("%s\n",week[res % 7]);
	}
	return 0;
}