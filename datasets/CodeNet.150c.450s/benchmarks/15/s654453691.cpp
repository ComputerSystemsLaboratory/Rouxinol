#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n,q;
	cin>>n;
	vector<int> S(n);
	for( int i=0; i<n; i++ ) {
		cin>>S.at(i);
	}
	cin>>q;
	int t;
	vector<int>::iterator iE = S.end( );
	int cnt = 0;
	for( int i=0; i<q; i++ ) {
		cin>>t;
		vector<int>::iterator iS = S.begin( );
		for( ; iS<iE; iS++ ) {
			if( t == *iS ) {
				cnt++;
				break;
			}
		}
	}
	cout<<cnt<<'\n';

    return 0;
}
	