#include <iostream>
using namespace std;

struct Card{
	char suit;
	int value;
}; 

void bubble(struct Card c[],int n){
	for(int i=0;i<n;i++){
		for(int j=n-1;j>i;j--){
			if(c[j].value<c[j-1].value){
				Card t=c[j];
				c[j] = c[j-1];
				c[j-1] = t;
			}
		}
	}
}

void selection(struct Card c[],int n){
	int minj=0;
		for(int i=0;i<n;i++){
			minj=i;
			for(int j=i;j<n;j++){
				if(c[j].value<c[minj].value){
					minj=j;
				}
			}
				Card t = c[i];
					c[i]= c[minj];
					c[minj] = t;
		}
}

bool isStabel(struct Card in[],struct Card out[],int n){
	for(int i=0;i<n;i++){
		if(in[i].suit!=out[i].suit)
		return false;
	}
	return true;
}

void print(struct Card a[],int n){
	for(int i=0;i<n;i++){
		if(i) cout<<" ";
		cout<<a[i].suit<<a[i].value; 
	}
	cout<<endl;
}

int main(){
	Card c1[100],c[100];
	int n;

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>c1[i].suit>>c1[i].value;
	}
	for(int i=0;i<n;i++){
		c[i]=c1[i];
	}
	
	bubble(c1,n);
	selection(c,n);
	
	print(c1,n);
	cout<<"Stable"<<endl;
	
	print(c,n);
	if(isStabel(c1,c,n))
	cout<<"Stable"<<endl;
	else 
	cout<<"Not stable"<<endl;
	
	return 0;
}