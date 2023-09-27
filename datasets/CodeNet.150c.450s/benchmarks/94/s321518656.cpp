#include <iostream>

using namespace std;

void bubbleSort(int *,int);

int main(){
	int n;
	cin>>n;
	int *array;
	array=new int [n];
	if (array==NULL) {
		cout<<"Error!"<<endl;
		return -1;
	}
	for (int i=0;i<n;i++){
		cin>>array[i];
	}
	bubbleSort(array,n);
	delete [] array;
	return 0;
}

void bubbleSort(int *a,int n){
	int cnt=0;
	for (int i=0;i<n;i++){
		for (int j=n-1;j>=i+1;j--){
			if (a[j]<a[j-1]){
				int temp;
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
				cnt++;
			}
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