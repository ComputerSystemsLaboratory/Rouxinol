#include<iostream>

#define MAXN 10000
#define MAXQ 10000

using namespace std;

int main()
{
	int S[MAXN],T[MAXQ];
	int n,q;

	cin>>n;
	for( int i=0; i<n; i++ ) {
		cin>>S[i];
	}
	cin>>q;
	for( int i=0; i<q; i++ ) {
		cin>>T[i];
	}
	int cnt=0;
	for( int i=0; i<q; i++ ) {
		for( int j=0; j<n; j++ ) {
			if( T[i] == S[j] ) {
				cnt++;
				break;
			}
		}
	}
	cout<<cnt<<endl;
	
    return 0;
}