#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;

	vector<char> cs;
	vector<char> cd;
	cs.reserve(n);
	cd.reserve(n);

	for(int i = 0; i < n; ++i)
	{
		char c;
		int d;
		cin >> c >> d;
		cs.push_back(c);
		cd.push_back(d);
	}
	
	char t[] = {'S', 'H', 'C', 'D'};
	for(int i = 0; i < 4; ++i){
		for(int j = 1; j <= 13; ++j){
			bool isExist = false;
			for(int k = 0; k < n; ++k){
				if( cs[k] == t[i] && cd[k] == j ){
					isExist = true;
					break;
				}
			}
			
			if( !isExist )
				cout << t[i] << " " << j << "\n";
		}
	}	

	return 0;
}