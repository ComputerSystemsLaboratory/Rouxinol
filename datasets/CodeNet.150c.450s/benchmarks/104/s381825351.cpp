#include <iostream>

using namespace std;


int main(int argc, char const* argv[])
{
	int w,n;
	int a[30],b[30];
	int answer[31];

	cin >> w;

	for( int i = 0;i < 30;i++ ){
		a[i] = b[i] = 0;
		answer[i+1] = 0;
	}

	cin >> n;

	char comma;
	for( int j = 0;j < n;j++ ) cin >> a[j] >> comma >> b[j];

	int status;
	for( int i = 1;i <= w;i++ ){
		status = i;
		for( int j = 0;j < n;j++ ){
			if( a[j] == status ) status = b[j];
			else if( b[j] == status ) status = a[j];
		}
		answer[status] = i;
	}

	for( int i = 1;i <= w;i++ ) cout << answer[i] << endl;


	return 0;
}