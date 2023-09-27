#include <cstdio>
using namespace std;

int main()
{
	int data[101] = {0};
	int n, max = 0;
	
	while (scanf("%d", &n) != EOF){
		data[n]++;
	}
	
	for (int i = 0; i < 101; i++){
		if (max < data[i]){
			max = data[i];
		}
	}
	
	for (int i = 0; i < 101; i++){
		if (max == data[i]){
			printf("%d\n", i);
		}
	}
	
	return (0);
}