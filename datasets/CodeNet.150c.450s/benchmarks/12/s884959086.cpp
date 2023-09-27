#include<iostream>

using namespace std;


int main()
{
	int A[256], h;

	cin >> h;
	for (int i = 1; i <= h; i++)
		cin >> A[i];

	for (int i = 1; i <= h; i++)
	{
		int k;
		cout << "node " << i << ": key = " << A[i] ;
		k = i / 2;
		if(k)
			cout << ", parent key = " << A[k];

		k = i * 2;
	    if(k<=h)
			cout << ", left key = " << A[k];
		if ((k+1)<= h)
			cout << ", right key = " << A[k+1];

		 cout << ", "<<endl;
	}


	return 0;
}
