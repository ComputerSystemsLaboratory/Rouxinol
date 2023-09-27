#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s, w, r;
	int q, i, j, a, b;
	cin >> s >> q;
	
	for(i = 0; i < q; ++i){
		cin >> w >> a >> b;
		if( w == "replace" ){
			cin >> r;
			for( j = a; j <= b; ++j)
				s[j] = r[j-a];			
		}else if( w == "print" ){
			for( j = a; j <= b; ++j)
				cout << s[j];
			cout << "\n";
		}else if( w == "reverse" ){
			string c = s;
			for( j = a; j <= b; ++j)
				s[j] = c[b+a-j];
		}
	}

	return 0;
}