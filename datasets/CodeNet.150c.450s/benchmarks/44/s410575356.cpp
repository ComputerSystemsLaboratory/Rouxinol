#include <iostream>
using namespace std;
int main(){
	int a[5],b[5];
	int x;
	while(cin>>x){
		a[0]=x;
		for( int i=1 ; i<4 ; i++ )
			cin >> a[i];
		for( int i=0 ; i<4 ; i++ )
			cin >> b[i];
		int hit=0,blow=0;
		for( int i=0 ; i<4 ; i++ ){
			for( int j=0 ; j<4 ; j++ ){
				if( a[i]==b[j] ){
					if( i==j )
						hit++;
					else
						blow++;
				}
			}
		}
		cout << hit <<" "<< blow << endl;
	}
}