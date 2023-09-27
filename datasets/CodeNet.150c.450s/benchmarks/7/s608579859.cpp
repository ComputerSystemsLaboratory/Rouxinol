#include <iostream>

using namespace std;

void reverse(int *array, int length) {
	int i;
	int j;
	for(i=0;i<length-1;i++){
		for(j=i+1;j<length;j++){
			if(array[i]<array[j]){
				int temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
}

int main() {
	int mountain[10];
	for (int i = 0; i < 10; i++) {
		cin >> mountain[i];
	}
	reverse(mountain, 10);
	for (int i = 0; i < 3; i++) {
		cout << mountain[i] << endl;
	}
}