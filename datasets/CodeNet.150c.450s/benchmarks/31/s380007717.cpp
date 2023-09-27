#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int MaximumProfit(vector<int> A,int n)
{
	int min = A[0];
	int max = -1000000000;
	for(int i=1;i<n;i++){
		max = std::max(max,A[i]-min);
		min = std::min(A[i],min);
	}
	return max;
}

int main()
{	
	int n;
	cin >> n;
	
	vector<int> A;
	A.resize(n);

	for(int i=0;i<n;i++)cin >> A[i];
	
	cout << MaximumProfit(A,n) << endl;
	
	return 0;
}