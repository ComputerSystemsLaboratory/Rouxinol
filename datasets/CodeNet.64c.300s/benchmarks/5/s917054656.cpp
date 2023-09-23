#include <iostream>
using namespace std;

int main(){
	int array[10];
	int num1=0,num2=0,num3=0;
	for(int i=0;i<10;i++){
		cin >> array[i];
		if(array[i]>num1){
			num3 = num2;
			num2 = num1;
			num1 = array[i];
			continue;
		}
		if(array[i]>num2){
			num3=num2;
			num2=array[i];
			continue;
		}
		if(array[i]>num3){
			num3=array[i];
			continue;
		}
	}

	cout << num1 << endl
		<< num2 << endl
		<< num3 << endl;
	return 0;
}