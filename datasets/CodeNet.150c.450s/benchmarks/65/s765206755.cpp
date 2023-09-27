#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
struct s{
	char a;
	int b;
};
s card1[100],card2[100];
void BubbleSort (int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=n-1;j>i;j--){
			if(card1[j].b<card1[j-1].b){
				swap(card1[j],card1[j-1]);
			}
		}
	}
	for(i=0;i<n;i++){
		if(i!=0){
			cout<<' ';
		}
		cout<<card1[i].a<<card1[i].b;
	}
	cout<<endl<<"Stable"<<endl;
}
void SelectionSort(int n){
	int minj,j,i,cut=0;
	for(i=0;i<n-1;i++){
		minj=i;
		for(j=i;j<n;j++){
			if(card2[j].b<card2[minj].b){
				minj=j;
			}
		}
		if(card2[i].b==card2[minj].b){
			cut++;
		}
		swap(card2[minj],card2[i]);
	}
	for(i=0;i<n;i++){
		if(i!=0){
			cout<<' ';
		}
		cout<<card2[i].a<<card2[i].b;
	}
	if(cut>1){
		cout<<endl<<"Not stable"<<endl;
	}
	else {
		cout<<endl<<"Stable"<<endl;
	}
}
int main(){
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>card1[i].a>>card1[i].b;
	}
	for(i=0;i<n;i++){
		card2[i]=card1[i];
	}
	BubbleSort (n);
	SelectionSort (n);
	return 0;
}
	