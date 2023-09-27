// 2015/05/13 Tazoe

#include <iostream>
using namespace std;

const int NOT_FOUND = -1;

int linearSearch(int key, int A[], int n)
{
	int i = 0;
	A[n] = key;

	while(A[i]!=key){
		i++;
	}

	if(i==n){
		return NOT_FOUND;
	}
	else{
		return i;
	}
}

int main()
{
	int n;
	cin >> n;

	int S[10001];	// 番兵を使うので
	for(int i=0; i<n; i++){
		cin >> S[i];
	}

	int q;
	cin >> q;

	int T[500];
	for(int i=0; i<q; i++){
		cin >> T[i];
	}

	int C = 0;

	for(int i=0; i<q; i++){
		if(linearSearch(T[i], S, n)!=NOT_FOUND){
			C++;
		}
	}

	cout << C << endl;

	return 0;
}