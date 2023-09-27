#include<iostream>
#include<stdlib.h>
using namespace std;


bool linear_search(int *seq, int n, int key)
{
	seq[n] = key;
	int i = 0;
	while(seq[i] != key)
	{
		i++;
	}
	
	return i != n;
}



int main()
{
	int seq[10000+1];
	int n;
	cin >> n;
	int i = 0;
	for(i; i < n; i++)
	{
		cin >> seq[i];
	}
	
	int q;
	cin >> q;
	

	int num = 0;
	int key = 0;
	for(i = 0; i < q; i++)
	{
		cin >> key;
		if(linear_search(seq, n, key)) num += 1;
	}
	
	cout << num << endl;
//	system("pause");
	return 0;
}
