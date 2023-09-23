#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

//?????§??¬?´???°(????????????????????????????????????)
template<class T>T GCD(T a, T b);

//????°???¬?????°(ab == (GCD)(LCM) ??????)
template<class T>T LCM(T a, T b);


int main()
{
	long long a, b;
	cin >> a >> b;
	
	do{
		cout << GCD(a, b) << " " << LCM(a, b) << endl;
	}while( (cin >> a >> b) );
	
	return 0;
}


template<class T>T GCD(T a, T b)
{
	T ans;
	do
	{
		if( a == b )
		{
			ans = a;
			break;
		}
		
		if( a < b )swap(a, b);
		a -= b;
		
	}while( 1 );
	
	return ans;
}

template<class T>T LCM(T a, T b)
{
	return a * b / GCD(a, b);
}