#include <iostream>
#include <algorithm>
using namespace std;

struct Card{
	char suit,value;
};

void bubble(struct Card A[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=n-1;j>=i+1;j--){
			if(A[j].value<A[j-1].value)
				swap(A[j],A[j-1]);
		}
	}
}

void selection(struct Card A[],int n){
	int i,j,mini;
	for(i=0;i<n;i++){
		mini=i;
		for(j=i;j<n;j++){
			if(A[j].value<A[mini].value) mini=j;
		}
		swap(A[i],A[mini]);
	}
}

void print(struct Card A[],int n){
	for(int i=0;i<n;i++){
		if(i>0) cout<<" ";
		cout<<A[i].suit<<A[i].value;
	}
	cout<<endl;
}

bool isStable(struct Card C1[],struct Card C2[],int n){
	for(int i=0;i<n;i++)
		if(C1[i].suit!=C2[i].suit) return false;
	return true;
}

int main(){
	Card C1[101],C2[101];
	int n,i;
	cin>>n;
	for(i=0;i<n;i++) cin>>C1[i].suit>>C1[i].value;
	for(i=0;i<n;i++) C2[i]=C1[i];
	bubble(C1,n);
	selection(C2,n);
	print(C1,n);
	cout<<"Stable"<<endl;
	print(C2,n);
	if(isStable(C1,C2,n)) cout<<"Stable"<<endl;
	else cout<<"Not stable"<<endl;
	return 0;
}
