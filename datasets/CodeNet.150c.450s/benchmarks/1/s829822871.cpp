#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define NMAX 100005
 
int N;
int path[NMAX];
int L[NMAX];


int compute(){
	L[0] = path[0];
	int length = 1;
	for (int i = 1; i < N; ++i)
	{
		if (path[i] > L[length-1])
		{
			L[length] = path[i];
			length++;
		} else {
			*lower_bound(L, L + length, path[i]) = path[i];
		}
	}
	return length;
}


int main(){
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> path[i];
	}
	cout << compute() << endl;
}