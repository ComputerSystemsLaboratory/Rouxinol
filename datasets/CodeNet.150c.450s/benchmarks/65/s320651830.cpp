#include <iostream>
using namespace std;

void bubbleSort(string array[],int n){
	for(int i=0;i<n;i++){
		for(int j=n-1;j>i;j--){
			if(array[j][1]<array[j-1][1]){
				string tmp;
				tmp = array[j-1];
				array[j-1]=array[j];
				array[j]=tmp;
			}
		}
	}
}

void selectionSort(string array[],int n){
	for(int i=0;i<n;i++){
		int minj=i;
		for(int j=i;j<n;j++){
			if(array[minj][1]>array[j][1]){
				minj=j;
			}
		}
		if(minj!=i){
			string tmp;
			tmp = array[minj];
			array[minj]=array[i];
			array[i]=tmp;
		}
	}
}

bool is_stable(string card[],string array[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int a=0;a<n;a++){
				for(int b=a+1;b<n;b++){
					if((card[i][1]==card[j][1])&&(card[i]==array[b])
					&&(card[j]==array[a])){
						return false;
					}
				}
			}
		}
	}
	return true;
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	string card[36];
	string cardb[36];
	string cards[36];
	//input
	for(int i=0;i<n;i++){
		cin>>card[i];
		cards[i]=card[i];
		cardb[i]=card[i];
	}
	//BubbleSort
	bubbleSort(cardb,n);
	//output
	for(int i=0;i<n;i++){
		if(i>0){
			cout<<" ";
		}
		cout<<cardb[i];
	}
	cout<<endl;
	
	if(is_stable(card,cardb,n)){
		cout<<"Stable"<<endl;
	}else{
		cout<<"Not stable"<<endl;
	}
	//SelectionSort
	selectionSort(cards,n);
	//output
	for(int i=0;i<n;i++){
		if(i>0){
			cout<<" ";
		}
		cout<<cards[i];
	}
	cout<<endl;
	
	if(is_stable(card,cards,n)){
		cout<<"Stable"<<endl;
	}else{
		cout<<"Not stable"<<endl;
	}
	
	return 0;
}