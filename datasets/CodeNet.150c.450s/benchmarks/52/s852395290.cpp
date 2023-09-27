#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <stdio.h>

#define MAX 1000000

using namespace std;

int main()
{
	vector<int> input;
	int n;

	while(cin>>n){
		if(n==0){
			cout<<input[input.size()-1]<<endl;
			input.pop_back();
		}
		else input.push_back(n);
	}

	return 0;
}