#include<iostream>
#include<vector>

using namespace std;

vector<int> BubbleSort(vector<int> A,int n)
{
	int flag = 1;
	int count = 0;
	
	while(flag == 1){
		flag = 0;
		for(int i=n-1;i>0;i--){
			if(A[i] < A[i-1]){
				count++;
				int change = A[i];
				A[i] = A[i-1];
				A[i-1] = change;
				flag = 1;
			}
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
	
	A = BubbleSort(A,n);
	
	for(int i=0;i<n;i++){
		if(i == n-1)cout << A[i] <<flush;
		else{
			cout << A[i] << " " << flush;
		} 
	}
	cout << endl << A[n] << endl;
	
	return 0;
}