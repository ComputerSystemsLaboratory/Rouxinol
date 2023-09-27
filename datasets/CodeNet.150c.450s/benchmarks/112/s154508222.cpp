#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <numeric>
#include <cmath>
#include <climits>
#include <limits>
#include <cfloat>
#include <fstream>
using namespace std;

void disp_table (map <char, char > t )
{
	int size = t.size();
	int i;

	map <char, char >::iterator it = t.begin();
	for (; it != t.end(); ++it){
		cout << (*it).first << ':' << (*it).second << endl;
	} // end for
}

int main()
{
//	cut here before submit 
//	freopen ("testcase.dc", "r", stdin );
	string str = "";
	int n;

	while (getline (cin, str ) ){
		stringstream ssn(str);
		ssn >> n;
		if (n == 0 ){
			break;
		} // end if
		map <char, char > table;
		int i;

		for (i = 0; i < n; ++i){
			char src = 0, des = 0;
			getline (cin, str );
			stringstream ss(str);
			ss >> src >> des;
			table[src] = des;
		} // end for

//		disp_table (table );

		int m;
		getline (cin, str );
		stringstream ssm (str );
		ssm >> m;

		for (i = 0; i < m; ++i){
			char c;
			getline (cin, str );
			stringstream ssc (str );
			ssc >> c;
//			cout << " c: " << c; 
			map <char, char>::iterator it = table.find (c);
			if (it != table.end() ){
				cout << table[c];
			}else{
				cout << c;
			} // end if
		} // end for
		cout << endl;
	} // end loop
		
	return 0;
}