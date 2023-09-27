#include<iostream>
using namespace std;

int A[20000];

bool linSearch(int key,int n)
{
	int i = 0;
	A[n] = key;
	while(A[i]!=key) i++;
	return i!=n;
}

int main()
{
	int cnt = 0;
	int n,q,a;
	cin >> n;
	for(int i = 0; i<n;i++)
		cin >> A[i];
	
	cin >> q;
	for(int i = 0; i<q;i++)
		{
		cin >> a;
		if(linSearch(a,n))
			cnt++;
		}
	cout <<cnt<<endl;
}