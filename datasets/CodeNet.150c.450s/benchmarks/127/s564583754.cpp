#include <iostream>
#include <cstdio>
#include <set>
#include <algorithm>
#define rep(i,n) for(int i=0;i<(n);i++)
#define ALL(A) A.begin(), A.end()

using namespace std;

int main()
{
	int n;
	scanf ("%d", &n );
	while (n-- ){
		string train = "";
		cin >> train;
		int len = train.length();
		set<string> kind;
		kind.clear();
		kind.insert (train );
		for (int j = 1; j < len; j++ ){
			string dv1o = train.substr (0, j ), dv1r = dv1o;
			string dv2o = train.substr (j ), dv2r = dv2o;
			reverse (ALL (dv1r ) );
			reverse (ALL (dv2r ) );
			kind.insert (dv2o+dv1o );
			kind.insert (dv1o+dv2r );
			kind.insert (dv2r+dv1o );
			kind.insert (dv1r+dv2o );
			kind.insert (dv2o+dv1r );
			kind.insert (dv1r+dv2r );
			kind.insert (dv2r+dv1r );
		} // end rep
		printf ("%d\n", kind.size() );
	} // end loop
		
	return 0;
}