#include<iostream>
using namespace std;
const int MAX = 100000;
int A[MAX];
int partition(int p , int r)
{
	int x = A[r];
	int i =  -1, k = 0;
	for(int k = 0 ;  k< r; k++)
	{
		if(x>=A[k])
		{
			i++;
			int t = A[k];
			A[k] = A[i];
			A[i] = t;
		}						
	}
	int t = A[i+1]; A[i+1] = x; A[r] = t;
	return i+1;
	
}

int main()
{
	int n;
	cin >> n;
	for(int i = 0 ;  i< n ; i++) cin >> A[i];
	int q = partition(0,n-1);
	
	for(int i = 0 ;  i< n ; i++) 
	{
		if(i) cout << " ";
		
		if(i == q)
			cout <<"[";
		cout << A[i];
		if(i == q)
			cout <<"]";
	}
	cout << endl;
		
}