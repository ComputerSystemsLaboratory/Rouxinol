#include <iostream>
using namespace std;

int data[100];
int count=0;
void SelectionSort(int[],int);

int main(){

	int i,n;
	
	cin>>n;
	for(i=0; i<n; i++){
	cin>>data[i];
	}
	
	SelectionSort(data,n);

	for(i=0; i<n; i++){
		cout<<data[i];
		if(i==n-1)cout<<endl;
		else cout<<" ";
	}
	
	cout<<count<<endl;

return 0;
	
}

void SelectionSort(int data[],int n){

	int i,j,mini,suspend;
	
	for(i=0; i<n; i++){

		mini=i;

		for(j=i; j<n; j++){
			if(data[j]<data[mini]){
				mini=j;
			}
		}

		if(data[i]>data[mini]){
		suspend=data[i];
		data[i]=data[mini];
		data[mini]=suspend;
		count++;
		}
		}
	
	}