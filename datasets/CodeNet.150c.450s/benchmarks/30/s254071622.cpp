#include<iostream>
#include<vector>

using namespace std;

vector<int> SelectSort(vector<int> A,int n)
{
	int flag;
	int count = 0;
	for(int i=0;i<n-1;i++){
		int minj = i;
		flag = 0;
		for(int j=i+1;j<n;j++){
			if(A[j] < A[minj]){
				minj = j;
				flag = 1;
			}
		}
		if(flag == 1){
			swap(A[i],A[minj]);
			count++;
		}
	}
	A[n] = count;
	return A;
}

int main()
{
	int n;
	cin >> n;
	
	vector<int> A;
	A.resize(n+1);

	for(int i=0;i<n;i++)cin >> A[i];
	
	A = SelectSort(A,n);
	
	for(int i=0;i<n;i++){
		if(i == n-1)cout << A[i] <<flush;
		else{
			cout << A[i] << " " << flush;
		} 
	}
	cout << endl << A[n] << endl;
	
	return 0;
}