#include<iostream>
using namespace std;

int map[101];

int main(){
	int n;
	while( cin >> n ){
		map[n]++;
	}
	int max=0;
	for( int i=1; i<=100; i++ )
		if( max < map[i] )	max = map[i];
	for( int i=1; i<=100; i++ )
		if( max == map[i] )	cout << i << endl;
	return 0;
}