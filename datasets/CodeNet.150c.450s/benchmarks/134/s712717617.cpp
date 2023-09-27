#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>	// require sort next_permutation count __gcd reverse etc.
#include <cstdlib>	// require abs exit atof atoi 
#include <cstdio>		// require scanf printf
#include <functional>
#include <numeric>	// require accumulate
#include <cmath>		// require fabs
#include <climits>
#include <limits>
#include <cfloat>
#include <iomanip>	// require setw
#include <sstream>	// require stringstream 
#include <cstring>	// require memset
#include <cctype>		// require tolower, toupper
#include <fstream>	// require freopen
#include <ctime>		// require srand
#define rep(i,n) for(int i=0;i<(n);i++)
#define ALL(A) A.begin(), A.end()
#define NIL -1

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

struct NODE{
	int p, l, r;
};

struct NODE bt[25];

void preorder (int curr )
{
	if (curr == NIL ) return;
	cout << ' ' << curr;
	preorder (bt[curr].l );
	preorder (bt[curr].r );

}

void inorder (int curr )
{
	if (curr == NIL ) return;
	inorder (bt[curr].l );
	cout << ' ' << curr;
	inorder (bt[curr].r );
}

void postorder (int curr )
{
	if (curr == NIL ) return;
	postorder (bt[curr].l );
	postorder (bt[curr].r );
	cout << ' ' << curr;
}

int main()
{
	
	ios_base::sync_with_stdio(0);
	int n; cin >> n;
	int root;
	rep (i, n ){
		bt[i].p = NIL, bt[i].l = NIL, bt[i].r = NIL;		
	} // end rep
	rep (i, n ){
		int id, left, right;
		cin >> id >> left >> right;
		bt[id].l = left;
		bt[id].r = right;
		bt[left].p = id;
		bt[right].p = id;
	} // end rep
	rep (i, n )
		if (bt[i].p == NIL ){
			root = i; break;
		} // end if
	cout << "Preorder" << endl;
	preorder(root );				
	cout << endl;

	cout << "Inorder" << endl;
	inorder(root );				
	cout << endl;
	
	cout << "Postorder" << endl;
	postorder(root );				
	cout << endl;
		
	return 0;
}