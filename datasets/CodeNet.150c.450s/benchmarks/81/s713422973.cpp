#include <iostream>
#include <vector>
#include <sstream>
//#include <fstream>

using namespace std;

const int MAX_N = 100000000;
typedef pair<int, int> P; // shortnest city, length order

P dijkstra (vector <vector <int> > path )
{
	P res (-1, MAX_N );	// shortnest city, length order
	int i,j;

	for (i = 0; i < 10; ++i){
		vector <int>  d (10, MAX_N );
		vector <bool> v (10, false );

		d[i] = 0;
		int mind = MAX_N;
		int p;

		do{
			mind = MAX_N;

			for (int k = 0; k < 10; ++k){
				if (!v[k] && d[k] < mind ){
					mind = d[k];
					p = k;
				} // end if
			} // end for

			v[p] = true;
		
			for (int k = 0; k < 10; ++k){
				if (d[p] + path[p][k] < d[k] ){
					d[k] = d[p] + path[p][k];
				} // end if
			} // end for
		}while (mind != MAX_N );

		int sum = 0;
		for (j = 0; j < 10; ++j){
			if (j != i && d[j] != MAX_N ){
				sum += d[j];
			} // end if
		} // end for
		if (sum == 0 ){
			continue;
		} // end if

		if (res.second > sum ){
			res.first  = i;
			res.second = sum;
		} // end if
	} // end for

	return res;
}			

int main()
{
//	cut here before submit 
//	freopen ("testcase.convenientlocation", "r", stdin );
	string str = "";
	int n;

	while (getline (cin, str ) ){
		stringstream ssn(str);
		ssn >> n;

		if (n == 0 ){
			break;
		} // end if		

		vector <vector <int> > path (10, vector <int> (10, MAX_N ) ); 
		int i;
		for (i = 0; i < n; ++i){
			getline (cin, str );
			int from, to, time;
			stringstream ss(str);
			ss >> from >> to >> time;
			path[from][to] = time;
			path[to][from] = time;
		} // end for
		P res;
		res = dijkstra (path );

		cout << res.first << ' ' << res.second << endl;
	} // end loop
		
	return 0;
}