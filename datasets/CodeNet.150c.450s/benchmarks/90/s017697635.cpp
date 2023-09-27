#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	const int limit = 101;
	int x;
	int integers[limit];
	for(int i = 1; i < limit; i++)
		integers[i] = 0;
	while(cin >> x) integers[x]++;
	int kmax = 0;
	for(int i = 1; i < limit; i++)
		kmax = max(kmax, integers[i]);
	for(int j = 1; j < limit; j++)
		if(integers[j] == kmax)
			cout << j << endl;
	return 0;
}