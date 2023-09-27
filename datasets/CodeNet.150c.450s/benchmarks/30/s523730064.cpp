#define MAX 100
#include <iostream>

using namespace std;
int a[MAX];
int n;
int count;

void show(){
	int i;
	for(i=0;i<n;i++){
		if(i)cout<<" ";
		cout<<a[i];
	}
	cout<<endl;
	cout<<count<<endl;
}

void selectionSort(int* a,int n){
	int i,j;
	int min;
	int flag;

	for(i=0;i<n-1;i++){
		flag=0;
		min=i;
		for(j=i;j<n;j++){
			if(a[min]>a[j]){
				min=j;
				flag=1;
			}
		}
		swap(a[min],a[i]);
		if(i!=min)++count;
	}
	return;
}

int main(void){
	int i;
	cin>>n;
	for(i=0;i<n;i++)cin>>a[i];

	selectionSort(a,n);
	show();

	return 0;
}