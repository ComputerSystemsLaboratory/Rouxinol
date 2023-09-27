#include<iostream>
#include<vector>

using namespace std;

void Output(vector<int> A)
{
	int i;
	for(i=0;i<A.size()-1;i++){
		cout << A[i] << " ";
	}
	cout << A[i] << endl;
}

void InsertionSort(vector<int> A,int N)
{
	for(int i=0;i<N;i++)
	{
		int v = A[i];
		int j = i - 1;
		while(j>=0 && A[j]>v){
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = v;
		Output(A);
	}
}

int main()
{	
	int N;
	cin >> N;
	
	vector<int> A;
	A.resize(N);
	for(int i=0;i<N;i++)cin >> A[i];
	InsertionSort(A, N);
	
	return 0;
}