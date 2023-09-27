#include <iostream>
using namespace std;

int main() {
	int n,i;
	char c[75]={};
	char d[75]={};
	char a,b;
		for(int i=0; i<75 ;i++){
			d[ i ]='0'+i;
		}
	while( true ){
		cin >> n;
		if( n == 0 ){
			return 0;
		}
		for(int i=0; i<75 ;i++){
			c[ i ]=d[i];
		}
		for( int i=0;i<n;i++){
			cin >> a >> b;
			c[a - '0' ]=b;
		}
		cin >> n;
		for( int i=0;i<n;i++){
			cin >> a;
			cout << c[a - '0'];
		}
		cout << endl;
	}
}