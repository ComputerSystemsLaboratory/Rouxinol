#include <iostream>

using namespace std;

int pow(int p, int n){
	int a = 1;
	for (int i=0; i<n; i++){
		a *= p;
	}
	return a;
}

bool included(int n, int l[], int p){
	for (int i=0; i<n; i++){
		if (l[i] == p){
			return true;
		}
	}
	return false;
}

void printarray(int n, int l[]){
	for (int i=0; i<n; i++){
		cout << l[i] << " ";
	}
	cout << endl;
}

int main(){

	int n;
	int q;
	int tmp;
	int tmppow;

	cin >> n;

	int a[n];
	for (int i=0; i<n; i++){
		cin >> tmp;
		a[i] = tmp;
	}

	cin >> q;

	int b[q];
	for (int i=0; i<q; i++){
		cin >> tmp;
		b[i] = tmp;
	}

	int l[pow(2,n)];
	l[0] = 0;
	for (int i=0; i<n; i++){
		tmp = a[i];
		tmppow = pow(2,i);
		for (int j=0; j<tmppow; j++){
			l[j+tmppow] = l[j] + tmp;
		}
	}

	for (int i=0; i<q; i++){
		if (included(pow(2,n),l,b[i])){
			cout << "yes" << endl;
		}
		else{
			cout << "no" << endl;
		}
	}


	return 0;
}
