#include<iostream>

using namespace std;

int main()
{

	int n;
	int cards[5][14]={{0}};
	char pattern;
	int num;

	
	cin>>n;	
	for( int i=0; i<n; i++ ) {
		cin>>pattern>>num;
		switch( pattern ) {
			case 'S':
				cards[0][num-1]=true;
				break;
			case 'H':
				cards[1][num-1]=true;
				break;
			case 'C':
				cards[2][num-1]=true;
				break;
			case 'D':
				cards[3][num-1]=true;
				break;
			}
	}
	for( int i=0; i<4; i++ ) {
		for( int j=0; j<13; j++ ) {
			if( false == cards[i][j] ) {
				switch( i ) {
					case 0:
						cout <<"S "<<(j+1)<<endl;
						break;
					case 1:
						cout <<"H "<<(j+1)<<endl;
						break;
					case 2:
						cout <<"C "<<(j+1)<<endl;
						break;
					case 3:
						cout <<"D "<<(j+1)<<endl;
						break;
				}
			}
		}
	}
	
    return 0;
}