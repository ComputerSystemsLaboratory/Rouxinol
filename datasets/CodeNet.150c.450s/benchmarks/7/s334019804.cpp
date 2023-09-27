#include <iostream>
using namespace std;

int main(void){
    int high[10];
	for(int i=0;i<10;i++){
		cin >> high[i];
	}
    
	for(int i=0;i<9;i++){
		int max_index = i;
		for(int j=i+1;j<10;j++){
			if(high[max_index] < high[j]){
				max_index = j;
			}
		}
		swap(high[i],high[max_index]);
	}
	
	for(int i=0;i<3;i++){
	    cout << high[i] <<endl;
	}
}