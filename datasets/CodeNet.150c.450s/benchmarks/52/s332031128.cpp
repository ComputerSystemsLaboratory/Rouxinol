#include <cstdio>

using namespace std;

int main()
{
	int num, tmp[10] = {0}, num_out[100] = {0};
	int cnt_1 = 9, cnt_2 = 0;
	
	while (scanf("%d", &num) != EOF){
		if (num == 0){
			num_out[cnt_2] = tmp[cnt_1 + 1];
			//printf("num_out[%d]=%d\n", cnt_2, num_out[cnt_2]);
			cnt_2++;
			cnt_1++;
		}
		else {
			tmp[cnt_1] = num;
			//printf("tmp[%d]=%d\n", cnt_1, tmp[cnt_1]);
			cnt_1--;
		}
	}
	
	for (int i = 0; i < 100; i++){
		if (num_out[i] != 0){
			printf("%d\n", num_out[i]);
		}
	}
	
	return (0);
}