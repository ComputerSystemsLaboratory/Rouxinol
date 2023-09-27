
#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
	int n[31] = {0},s[30];
	
	for(int i=1; i<=28; i++){
		cin>>s[i];
		n[s[i]] = 1;
	}

	for(int i=1; i<=30; i++){
		if(!n[i])
			cout<<i<<endl;
	}

	return 0;

}