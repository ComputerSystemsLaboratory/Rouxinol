#include <iostream>
using namespace std;
int main(){
	int n , m;
    int s[10002],t[502];
	cin >> n;
	for( int i=0 ; i<n ; i++ )
		cin >> s[i] ;
	cin >> m;
	int count=0;
	for( int i=0 ; i<m ; i++ )
		cin >> t[i] ;
	for( int i=0 ; i<m ; i++ ){
		s[n]=t[i];
		int j=0;
		while(s[j]!=t[i]){
			j++;
		}
		if( j!=n )
			count++;
	}
	cout << count << endl;
}