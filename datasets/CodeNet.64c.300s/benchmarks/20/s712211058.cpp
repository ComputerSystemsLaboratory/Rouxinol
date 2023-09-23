#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int sq(int x){
	return x*x;
}

int main(){

	int d;
	while(cin>>d){
		int sum=0;
		for(int cp = d; cp != 600; cp+=d){
			sum+=sq(cp)*d;
		}
		cout << sum << endl;
	}

	return 0;
}