#include<iostream>
using namespace std ;
int main()
{
	int n=0 , m=0 , l=0 ;
	long long int a=0 ;
	cin >> n >> m >> l ;
	long long int nm[100][100] , ml[100][100] ;
	for(int i=0;i<n;i++)
	{
		for(int ia=0;ia<m;ia++)
		{
		cin >> 	a ;
		nm[i][ia]=a ;
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int ia=0;ia<l;ia++)
		{
			cin >> 	a ;
			ml[i][ia]=a ;
		}
	}
	a=0 ;
	for(int i=0;i<n;i++)
	{
		for(int ia=0;ia<l;ia++)
		{
			for(int ib=0;ib<m;ib++)
			{
				a=a+nm[i][ib]*ml[ib][ia] ;
			}
			cout << a ;
			if(ia!=l-1) cout << " " ;
			a=0 ;
		}
		cout << endl ;
	}
	return 0 ;
}

