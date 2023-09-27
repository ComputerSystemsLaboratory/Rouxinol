#include <iostream>
using namespace std;

int main(){
	int array[10];
	int work;
    for(int i=0; i<10; i++){
       cin >> array[i];
	}
	
	for(int i=0; i<10; i++){
       for(int j=10-1; j>i; j--){
			if(array[j] > array[j-1]){
				work = array[j];
				array[j] = array[j-1];
				array[j-1] = work;
			}
		}
	}
			
	for(int i=0; i<3; i++){
       cout << array[i] << "\n";
	}
	
    return 0;
}