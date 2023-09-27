#include <cstdio>
#define MAX 100

int main(){
	int n, array[MAX];
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
		scanf("%d", &array[i]);
		
	bool flag = true;
	int temp, count = 0;
	while(flag){
		flag = false;
		for(int i = n - 1; i > 0; i--)
		if(array[i] < array[i - 1]){
			temp = array[i];
			array[i] = array[i - 1];
			array[i - 1] = temp;
			flag = true;
			count++;
		}
	}
	
	for(int i = 0; i < n; i++)
		if(i != n - 1)
			printf("%d ", array[i]);
		else
			printf("%d\n", array[i]);
			
			printf("%d\n", count);
			
	return 0;
}