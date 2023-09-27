#include<iostream>
#include<string>
using namespace std;

int main(){
	int line[31];
	int w, n;
	string str;
	getline( cin, str );
	sscanf( str.c_str(), "%d", &w );
	getline( cin, str );
	sscanf( str.c_str(), "%d", &n );

	for( int i=1; i<=w; i++ ){
		line[i] = i;
	}
	for( int i=0; i<n; i++ ){
		int a, b;
		getline( cin, str );
		sscanf( str.c_str(), "%d,%d", &a, &b );
		int tmp = line[a];
		line[a] = line[b];
		line[b] = tmp;
	}

	for( int i=1; i<=w; i++ ){
		cout << line[i] << endl;
	}
	
	return 0;
}