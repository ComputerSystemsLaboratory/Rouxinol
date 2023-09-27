#include<iostream>

using namespace std;

struct Card
{
	int value;
	char mark;
};

void BubbleSort(Card a[],int n)
{
	bool flag = true;
	for(int i = 0;flag;i++){
		flag = false;
		for(int j = n-1;j > i;j--){
			if(a[j].value < a[j-1].value){
				Card c = a[j];
				a[j] = a[j-1];
				a[j-1] = c;
				flag = true;
			}
		}
	}
}

void SelectionSort(Card a[],int n){
	int minj;
	for(int i = 0;i<n;i++){
		minj = i;
		for(int j=i;j<n;j++){
			if(a[minj].value>a[j].value)
				minj = j;
		}
		if(minj != i){
			Card c = a[i];
			a[i] = a[minj];
			a[minj] = c;
		}
	}
}

void Show(Card a[],int n){
	for(int i = 0;i<n;i++){
		if(i>0) cout << ' ';
		cout << a[i].mark << a[i].value ;
	}
	cout << endl;
}

int main(){
	int n;
	Card c1[100],c2[100];
	bool isStable = true;
	
	cin >>n;
	for(int i= 0;i<n;i++){
		cin >> c1[i].mark >> c1[i].value;
		c2[i] = c1[i];
	}
	
	BubbleSort(c1,n);
	SelectionSort(c2,n);
	
	Show(c1,n);
	
	cout<<"Stable"<<endl;
	Show(c2,n);
	for(int j=0;j<n;j++){
		if(c1[j].mark != c2[j].mark){
			cout << "Not stable" ;
			isStable = 0;
			break;
		}
	}
	if(isStable) cout << "Stable";
	cout <<endl;
	return 0;
}