#include<iostream>
using namespace std ;
int main()
{
	int n=0 , m=0 , l=0 , a=0 ;
	cin >> n >> m ;
	int Al[n][m] , bl[m] ;
	for(int i=0;i<n;i++)
	{
		for(int ia=0;ia<m;ia++)
		{
			cin >> l ;
			Al[i][ia]=l ;
		}
	}
	for(int ib=0;ib<m;ib++)
	{
		cin >> l ;
		bl[ib]=l ;
	}

	for(int i=0;i<n;i++)
	{
		for(int ia=0;ia<m;ia++)
		{
			a=a+bl[ia]*Al[i][ia] ;
			if(ia==m-1) cout << a << endl ;
		}
		a=0 ;
	}
	return 0 ;
}
