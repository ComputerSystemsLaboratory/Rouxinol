#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int depth = 0;
int sum = 0;

int dfs (int currs, int currd, int j)
{
	int count = 0;
	int i;

	if (currd == depth ){
		if (sum == currs ){
			return 1;
		}else{
			return 0;
		} // end if
	} // end if
	
	for (i = min(j, sum ); i >= 0; --i){
		currs += i;
		count += dfs (currs, currd + 1, i - 1 );
		currs -= i;
	} // end for

	return count;
}

int main()
{
//	cut here before submit 
//	freopen("testcase.si", "r", stdin);
	string str = "";

	while (getline (cin, str ) ){
		int n, s;
		int res = 0;
		stringstream ss(str);
		ss >> n >> s;

		if (n == 0 && s == 0){
			break;
		} // end if
		
		depth = n;
		sum = s;

		res = dfs (0, 0, 9 );

		cout << res << endl;
	} // end while
	
	return 0;
}