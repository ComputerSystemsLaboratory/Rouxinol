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
#define UINF -1

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

const int max_n = 2000002;

int a[max_n];
int heap_size;

void maxHeapify (int i )
{
	int l = 2*i + 1;
	int r = 2*i + 2;
	int largest;

	if (l < heap_size && a[l] > a[i] )
		largest = l;
	else
		largest = i;
	if (r < heap_size && a[r] > a[largest] )
		largest = r;

	if (largest != i ){
		swap (a[i], a[largest] );
		maxHeapify (largest );
	} // end if				
}

int heapExtractMax (void )
{
	if (heap_size < 1 ){
		return -1;
	} // end if

	int max = a[0];
	a[0] = a[heap_size-1];
	heap_size--;
	maxHeapify (0  );

	return max;
}

void heapIncreaseKey (int i, int key )
{
	if (key < a[i] ){
		cerr << "新しいキーは現在のキーより小さい" << endl;
	} // end if
	
	a[i] = key;
	while (i > 0 && a[(i-1)/2] < a[i] ){
		swap (a[i], a[(i-1)/2] );
		i = (i-1)/2;
	} // end while
}

void maxHeapInsert (int key )
{
	heap_size++;
	a[heap_size-1] = UINF;
	heapIncreaseKey (heap_size-1, key );
}

int main()
{
	memset (a, 0, sizeof (a ) );
	heap_size = 0;

	ios_base::sync_with_stdio(0);
	string com = "";
	while (true ){
		cin >> com;
		if (com == "end" ) break;
		else
		if (com == "insert" ){
			int key; cin >> key;
			maxHeapInsert(key );
		}else
		if (com == "extract" ){
			int maxv = heapExtractMax();
			cout << maxv << endl;
		} // end if
	} // end loop
		
	return 0;
}