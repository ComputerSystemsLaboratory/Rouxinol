#include <iostream>
using namespace std;

int data[100];
int count=0;
void BubbleSort(int[],int);

int main(){

	int i,n;
	
	cin>>n;
	for(i=0; i<n; i++){
	cin>>data[i];
	}
	
	BubbleSort(data,n);

	for(i=0; i<n; i++){
		cout<<data[i];
		if(i==n-1)cout<<endl;
		else cout<<" ";
	}
	
	cout<<count<<endl;

return 0;
	
}

void BubbleSort(int data[],int n){

	int i,j,suspend;
	
	for(i=0; i<n; i++){
		for(j=n-1; j>=i+1; j--){
			if(data[j]<data[j-1]){
				suspend=data[j];
				data[j]=data[j-1];
				data[j-1]=suspend;
				count++;
			}
		}
	}
}