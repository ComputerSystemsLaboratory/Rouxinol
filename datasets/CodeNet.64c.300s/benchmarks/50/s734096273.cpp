#include<iostream>
using namespace std;

void swap(int *a, int *b){
	int work;
	work = *a;
	*a = *b;
	*b = work;
}

int bubbleSort(int array[],int n){
	int cnt=0;
	bool flag=true;
	while(flag){
		flag = false;
		for(int j=n-1;j>0;j--){
			if(array[j]<array[j-1]){
				swap(&array[j],&array[j-1]);
				cnt++;
				flag = true;
			}
		}
	}
	return cnt;
}

void printArray(int array[],int n){
	for(int i=0;i<n;i++){
		if(i>0) cout << " ";
		cout << array[i];
	}
	cout << endl;
}

int main(){
	int n,cnt;
	cin >> n;
	int array[101];
	for(int i=0;i<n;i++){
		cin >> array[i];
	}
	cnt = bubbleSort(array,n);
	printArray(array,n);
	cout << cnt << endl;
}