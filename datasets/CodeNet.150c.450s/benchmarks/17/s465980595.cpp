#include<iostream>
using namespace std;

int main(){
	int a[5];
	int p;
	int temp;
	int i,j;
	int max;
	int maxin;
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
	for(i=0;i<5;i++){
		max = a[i];
		maxin = i;
		for(j=i+1;j<5;j++){
			if(max < a[j]){
				max = a[j];
				maxin = j;
			}
		}
		temp = a[i];
		a[i] = a[maxin];
		a[maxin] = temp;
	}
	cout << a[0];
	for(i=1;i<5;i++){
		cout << " " << a[i];
	}
	cout << endl;
	return 0;
}