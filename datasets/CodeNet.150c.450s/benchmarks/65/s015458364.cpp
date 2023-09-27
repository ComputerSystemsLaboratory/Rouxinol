#include "bits/stdc++.h"
using namespace std;
struct Card{char suit,value;};

void bubble(struct Card aa[], int n) {
	for (int i = 0; i<n; i++) {
		for (int j = n-1; j>=i+1; j--) {
			if(aa[j].value < aa[j-1].value){
				swap( aa[j-1],aa[j]);
			}
		}
	}
}

void sectionsort(struct Card aa[], int n) {
	for (int i = 0; i<n; ++i) {
		int minj=i;
		for (int j = i; j<n; j++) {
			if(aa[j].value<aa[minj].value){minj=j;}
		}
			swap(aa[i], aa[minj]);
		}
}
void print(struct Card aa[],int N){
	for (int i = 0; i < N; ++i) {
			if(i>0)cout<<" ";
			cout<<aa[i].suit<<aa[i].value;
	}
	cout<<endl;
}
bool isStable(struct Card c1[],struct Card c2[],int n){
	for (int i = 0; i < n; ++i) {
		if (c1[i].suit!=c2[i].suit) {
			return false;
		}
	}return true;
}

int main() {
	Card c1[100],c2[100];
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i) {
		cin>>c1[i].suit>>c1[i].value;
	}
	for (int i = 0; i < n; i++) {c2[i]=c1[i];}
	bubble(c1, n);
	sectionsort(c2, n);
	print(c1,n);
	cout<<"Stable"<<endl;
	print(c2,n);
	if (isStable(c1,c2,n)) {
		cout<<"Stable"<<endl;
	} else{
		cout<<"Not stable"<<endl;
	}
}