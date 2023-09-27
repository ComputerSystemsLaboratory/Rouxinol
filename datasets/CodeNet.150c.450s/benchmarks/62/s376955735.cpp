#include<iostream>
using namespace std;

int main()
{
	int abc[4];
	int tmp;
	
	cin>>abc[0]>>abc[1]>>abc[2];
	for( int i=0; i<2; i++ ) {
		for( int j=i+1; j<3; j++ ) {
			if( abc[j] < abc[i] ) {
				tmp=abc[i];
				abc[i]=abc[j];
				abc[j]=tmp;		
			}
		}
	}

	cout <<abc[0]<<" "<<abc[1]<<" "<<abc[2]<<endl;
	 
    return 0;
}