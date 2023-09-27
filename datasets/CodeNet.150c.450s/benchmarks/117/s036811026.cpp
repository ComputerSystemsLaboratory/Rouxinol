#include<bits/stdc++.h>
using namespace std;

void mergeSort(int[], int, int, int);
void merge(int[], int, int, int);

#define inf 1000000000

int R[250001],L[250001];
int cnt = 0;

int main(){
	int n;
	int S[500002];
	
	cin >> n;
	
	for(int i = 0 ; i < n ; i++){
		cin >> S[i];
	}
	
	mergeSort(S, 0, n, n);
	
	for(int i = 0 ; i < n-1 ; i++){
		cout << S[i] << " ";
	}
	cout << S[n-1] << endl;
	cout << cnt << endl;
	return 0;
}

void merge(int S[], int left, int mid, int right, int n){
	int n1, n2;
	n1 = mid - left;
	n2 = right - mid;
	
	for(int i = 0 ; i < n1 ; i++){
		L[i] = S[left + i];
	}
	
	for(int i = 0 ; i < n2 ; i++){
		R[i] = S[mid +i];
	}
	
	L[n1] = inf;
	R[n2] = inf;
	
	int i = 0;
	int j = 0;
	
	for(int k = left ; k < right ; k++){
		cnt++;
		if(L[i] <= R[j]){
			S[k] = L[i];
			i = i + 1;
		}else{
			S[k] = R[j];
			j = j + 1;
		}
	}
}

void mergeSort(int S[], int left, int right, int n){
	if(left + 1 < right){
		int mid = (left + right) / 2;
		mergeSort(S, left, mid, n);
		mergeSort(S, mid, right, n);
		merge(S, left, mid, right, n);
	}
}