#include <iostream>

using namespace std;

bool bubbleSort(string c[], int& n){
	string hold;
	for(int i=0;i<n;i++){
		for(int j=n-1;j>=1;j--){
			if(c[j][1]<c[j-1][1]){
				hold = c[j-1];
				c[j-1] = c[j];
				c[j] = hold;
			}
		}
	}
	return true;
}

bool selectionSort(string c[], int& n){
	string hold;
	int i,j;
	for(i=0;i<n;i++){
		int minj = i;
		for(j=i;j<n;j++){
			if(c[j][1] < c[minj][1]){ minj = j; } //string[1] is '0' to '9'
		}
		if(i!=minj){
			hold = c[i];
			c[i] = c[minj];
			c[minj] = hold;
		}
	}
	return true;
}

void output_arrayString(string c[], int&n){
	for(int i=0;i<n;i++){
		cout << c[i];
		if(i+1==n){
			cout << endl;
		} else {
			cout << ' ';
		}
	}
}

bool isSameArrayString(string c1[], int n1, string c2[], int n2){
	if(n1!=n2){
		return false;
	} else {
        for(int i=0;i<n1;i++){
			if(c1[i]!=c2[i]){
				return false;
			}
        }
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	string cs1[n],cs2[n];
	for(int i=0;i<n;i++){
		cin >> cs1[i];
		cs2[i] = cs1[i];
	}

	bubbleSort(cs1, n);
	selectionSort(cs2, n);

	output_arrayString(cs1,n);
	cout << "Stable" << endl;
	output_arrayString(cs2,n);
	cout << (isSameArrayString(cs1,n,cs2,n)?"Stable":"Not stable") << endl;

	return 0;
}

