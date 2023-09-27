// ALDS1_5_B
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &A, int left, int mid, int right, int &count){
	int n1 = mid - left, n2 = right - mid;
	vector<int> L(n1), R(n2);

	for(int i=0;i<n1;i++)
		L[i] = A[left+i];
	for(int i=0;i<n2;i++)
		R[i] = A[mid+i];

	int i=0, j=0;
	for(int k=left;k<right;k++){
		count++;

		if(i >= n1){
			A[k] = R[j];
			j++;
			continue;
		}

		if(j >= n2){
			A[k] = L[i];
			i++;
			continue;
		}

		if(L[i] <= R[j]){
			A[k] = L[i];
			i++;
		}else{
			A[k] = R[j];
			j++;
		}
	}
}

void mergeSort(vector<int> &A, int left, int right, int &count){
	if(left+1 < right){
		int mid = (left + right) / 2;
		mergeSort(A, left, mid, count);
		mergeSort(A, mid,right, count);
		merge(A, left, mid, right, count);
	}
}

int main(){
	int n, num, count=0;
	vector<int> S;

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num;
		S.push_back(num);
	}

	mergeSort(S, 0, n, count);

	for(int i=0;i<n;i++){
		if(i != 0)
			cout<<" ";
		cout<<S[i];
	}
	cout<<endl<<count<<endl;

	return 0;
}