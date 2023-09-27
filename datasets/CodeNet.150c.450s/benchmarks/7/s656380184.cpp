#include <iostream>
using namespace std;
int main(){

	int a[10];

	 for(int i=0; i<10; i++){

	 	cin >> a[i];
	 }

	 for(int t=0; t<9; t++){

	 	for(int s=t+1; s<10; s++ ){

	 		if(a[s]>a[t]){

	 			int num=a[s];

	 			a[s]=a[t];

	 			a[t] = num;
	 		}
	 	}
	 }

	 for (int j=0; j<3; j++){

	 	cout << a[j] << endl;
	 }
}