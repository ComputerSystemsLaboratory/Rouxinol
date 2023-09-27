#include <stdio.h>
#include <vector>
using namespace std;
typedef vector<int> Row;
//---------------------------------------
//---------------------------------------

int main(void)
{
	int r, c; 
	int num;       
	int r_sum = 0;          //?????????????¨?
	Row c_sum(101, 0); 	   //?????????????¨?(?????????0????????????0)

	
	scanf("%d %d", &r, &c);
	
	for(int i = 0; i < r; i++){
		r_sum = 0;
		for(int j = 0; j < c; j++){
			scanf("%d", &num);
			r_sum += num;
			c_sum[j] += num;
			printf("%d ", num);
		}
		printf("%d\n", r_sum);
		c_sum[c] += r_sum;
	}
    for(int j = 0; j < c; j++){
		printf("%d ", c_sum[j]);
	}
	printf("%d\n", c_sum[c]);
	
	return 0;
}