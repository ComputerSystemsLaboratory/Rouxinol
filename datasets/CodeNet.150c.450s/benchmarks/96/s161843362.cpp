#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	const char C[10][6] = {
		{},
		{'.',',','!','?',' ', 5 },
		{'a','b','c', 0 , 0 , 3 },
		{'d','e','f', 0 , 0 , 3 },
		{'g','h','i', 0 , 0 , 3 },
		{'j','k','l', 0 , 0 , 3 },
		{'m','n','o', 0 , 0 , 3 },
		{'p','q','r','s', 0 , 4 },
		{'t','u','v', 0 , 0 , 3 },
		{'w','x','y','z', 0 , 4 },
	};
	int n;
	cin >> n;
	for(int i=0 ; i<n ; ++i ){
		char s[1025];
		cin >> s;
		char c = 0;
		int pos = -1;
		for(int j=0 ; s[j] ; ++j ){
			int button = s[j] - '0' ;
			if( button == 0 ){
				if( c != 0 ) cout << c ;

				pos = -1;
				c = 0;
			}else{
				pos++;
				c = C[ button ][ pos % (int)(C[button][5]) ];
			}
		}
		cout << endl;
	}
}