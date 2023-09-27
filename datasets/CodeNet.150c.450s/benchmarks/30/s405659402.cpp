#include <iostream>

using namespace std;

void selectionSort(int *,int);

int main(){
	int n;
	cin>>n;
	int *array;
	array=new int [n];
	if (array==NULL){
		cout<<"Error!"<<endl;
		return -1;
	}
	for (int i=0;i<n;i++){
		cin>>array[i];
	}
	selectionSort(array,n);
	delete [] array;
	return 0;
}

void selectionSort(int *a,int n){
	int cnt=0;
	for (int i=0;i<n;i++){
		int mini=i;
		for (int j=i;j<n;j++){
			if (a[j]<a[mini]){
				mini=j;
			}
		}
		if (i!=mini){
			int temp;
			temp=a[i];
			a[i]=a[mini];
			a[mini]=temp;
			cnt++;
		}
	}
	for (int i=0;i<n;i++){
		cout<<a[i];
		if (i!=n-1){
			cout<<" ";
		}
	}
	cout<<endl;
	cout<<cnt<<endl;
}