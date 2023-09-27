#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;
typedef long long Int;
#define REP(i , x) for(int i = 0 ; i < x ; ++i)



int main()
{
	int n;
	int m;
	

	while (cin >> n,n){

		map<char, char> table;
		string ans;
		REP(i, n){
			char a, b;
			cin >> a >> b;
			table[a] = b;
		}
		cin >> m;
		REP(i, m){
			char a;
			cin >> a;
			if (table.find(a) == table.end()){
				ans += a;
			}
			else
				ans += table[a];
		}

		cout << ans << endl;
	}
	return 0;

}