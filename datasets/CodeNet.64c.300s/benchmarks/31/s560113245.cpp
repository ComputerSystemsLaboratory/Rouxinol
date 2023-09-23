#include <stdio.h>
#include <iostream>
#include <vector>
#include <list>
#include <cmath>
#include <fstream>
#include <algorithm>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <complex>
#include <iterator>
#include <cstdlib>
#include <sstream>

using namespace std;

#define EPS (1e-10)
#define EQ(a,b) (abs((a) - (b)) < EPS)
#define EQV(a,b) (EQ((a).real(),(b).real()) && EQ((a).imag(),(b).imag()))

typedef complex<double> P;
typedef long long ll;

const int MAX_SIZE = 10000;

int main(){

	bool flags[31];
	fill(flags,flags+31,false);
	for(int i = 0; i < 28; i++){
		int num;
		cin >> num;
		flags[num] = true;
	}

	for(int i = 1; i <= 30; i++){
		if(!flags[i]){
			cout << i << endl;
		}
	}

	return 0;
}