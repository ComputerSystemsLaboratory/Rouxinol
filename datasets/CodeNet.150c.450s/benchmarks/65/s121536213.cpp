#include <iostream>
#define MAX 36
using namespace std;

class card{
public:
	char mark;
	int num;
};

void trace(card k[], int n){
	for(int i = 0 ; i < n ; i++){
		if(i != 0){
			cout << " ";
		}
		cout << k[i].mark << k[i].num;
	}
	cout << endl;
}

void bubblesort(card a[], int n){
	bool flag = 1;

	for(int i = 0 ; flag ; i++){
		flag = 0;
		for(int j = n - 1 ; j  >= i + 1 ; j--){
			if(a[j].num < a[j-1].num){
				swap(a[j],a[j-1]);
				flag = 1;
			}
		}
	}
	trace(a,n);
}

void selectionsort(card a[], int n){
	int min;
	bool flag;

	for(int i = 0 ; i < n - 1 ; i++){
		min = i;
		flag = 0;

		for(int j = i + 1 ; j < n ; j++){
			if(a[min].num > a[j].num){
				min = j;
				flag = 1;
			}
		}
		if(flag){
			swap(a[min],a[i]);
		}
	}

	trace(a,n);
}

bool isStable(card selection[], card bubble[], int n){
	for(int i = 0 ; i < n ; i++){
		if((selection[i].num != bubble[i].num) || (selection[i].mark != bubble[i].mark)){
			return false;
		}
	}
	return true;
}

int main(){
	int n;
	card a[MAX];
	card b[MAX];
	cin >> n;

	for(int i = 0 ; i < n ; i++){
		cin >> a[i].mark;
		cin >> a[i].num;
		b[i] = a[i];
	}

	bubblesort(a,n);
	cout << "Stable" << endl;
	selectionsort(b,n);
	if(isStable(b,a,n)){
		cout << "Stable" << endl;
	} else {
		cout << "Not stable" << endl;
	}

}