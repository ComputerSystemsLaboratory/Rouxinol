#include<iostream>
#include<cmath> 
#include<vector>

using namespace std;

bool Judge(int A)
{	
	for(int j=2;j<=floor(sqrt((double)A));j++){
		if(A%j==0)return false;
	}
	return true;
}

int PrimeNumbers(vector<int> A)
{
	int count = 0;
	for(int i=0;i<A.size();i++){
		if(Judge(A[i]))count++;
	}
	return count;
}

int main()
{	
	int n;
	cin >> n;
	
	vector<int> A;
	A.resize(n);

	for(int i=0;i<n;i++)cin >> A[i];
	
	cout << PrimeNumbers(A) << endl;
	
	return 0;
}