#include <iostream>
#include <list> //???????????????????????????
#include <vector>//????????¢??????????????????
#include <climits>
using namespace std;



int merge(vector <int>&A, int left, int mid, int right){
	
	
  int n1 = mid - left;
  int n2 = right - mid;
	vector <int> L(n1+1);
	vector <int> R(n2+1);
	for(int i=0 ; i < n1 ; i++){
		L[i] = A[left + i];
	}
	for(int i=0 ; i < n2 ; i++){
		 R[i] = A[mid + i];
	}
	
	L[n1] = INT_MAX;
	R[n2] = INT_MAX;
	int i = 0;
	int j = 0;
	
	int sum = 0;
	for(int k = left ; k < right ; k++){
		if(L[i] <= R[j]){
			A[k] = L[i];
			i = i+1;
			
		}else{
			A[k] = R[j];
			j = j + 1;
		}

	}
		sum += i;
		sum += j;
	return sum;
}


int mergeSort(vector <int>&A, int left, int right){
	int sum=0;
	if(left+1 < right){
	    int mid = (left + right)/2;
	    sum += mergeSort(A, left, mid);
	    sum += mergeSort(A, mid, right);
	    sum += merge(A, left, mid, right);
		
	}
	return sum;
	
}
int main(void){
	int n;
	cin >> n;
	vector <int> S(n);
	
	int s;
	for (int i=0 ; i < n; i++){
		
	cin >> s;
		S[i]=s;
	}
	
	int sum = mergeSort(S,0,S.size());
	
	for(int i=0; i < S.size() ; i++){
		
		cout << S[i];
		if(i < S.size()-1){
		cout << " ";
		}
	}
	cout << endl;
	cout << sum << endl;

}