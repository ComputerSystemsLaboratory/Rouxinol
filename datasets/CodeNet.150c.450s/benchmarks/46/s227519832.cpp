#include<iostream>
using namespace std;

int main()
{
	int ans = 0;
	int N, X;
	
	do{
		cin >> N >> X;
		ans = 0;
		
		if( N == 0 && X == 0 )break;
		
		for(int i = 1; i <= N - 2; i++){
			for(int j = i + 1; j <= N - 1; j++){
				for(int k = j + 1; k <= N; k++){
					if( i + j + k == X ){
						ans++;
					}
				}
			}
		}
		cout << ans << endl;
		
	}while( 1 );

	return 0;
}