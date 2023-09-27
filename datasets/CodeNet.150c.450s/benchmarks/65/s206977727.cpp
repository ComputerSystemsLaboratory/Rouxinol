#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

void BubbleSort(vector<string> &A)
{	
	for(int i = 0; i <= A.size() - 1; i++){
		for(int j = A.size() - 1; j >= i + 1; j--){
			if(A[j][1] < A[j - 1][1]){
				string a = A[j];
				A[j] = A[j - 1];
				A[j - 1] = a;
			}
		}
	}
}

void SelectionSort(vector<string> &A)
{	
	for(int i = 0; i <= A.size() - 1; i++){
		int mini= i;
		for(int j = i; j <= A.size() - 1; j++){
			if(A[j][1] < A[mini][1]){
				mini = j;
			}
		}
		if(i != mini){
			string a = A[i];
			A[i] = A[mini];
			A[mini] = a;
		}
	}
}
void print_vector(vector<string> num)
{
	for(int i = 0; i < num.size(); i++){
		if(i){
			cout << " ";
		}
		cout << num[i];
	}
	cout << endl;
}
int main(void)
{
	int n;
	cin >> n;
	vector<string> A(n);
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	vector<string> B = A;
	
	BubbleSort(A);
	print_vector(A);
	cout << "Stable" << endl;
	
	SelectionSort(B);
	print_vector(B);
	if(A == B){
		cout << "Stable" << endl;
	}
	else{
		cout << "Not stable" << endl;
	}
	return 0;
}