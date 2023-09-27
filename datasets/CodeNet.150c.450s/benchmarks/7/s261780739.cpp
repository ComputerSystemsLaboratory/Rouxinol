#include <cstdio>
#define MAX 10

int* sort(int* array);

int main(){
	int array[MAX];
	
	for(int i = 0; i < MAX; i++){
		array[i] = 0;
		scanf("%d", &array[i]);
	}
	
	sort(array);
	
	for(int i = MAX - 1; i > 6; i--){
		printf("%d\n", array[i]);
	}
	return 0;
}

int* sort(int* array){
    int temp = 0;
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX - i - 1; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    return array;
}