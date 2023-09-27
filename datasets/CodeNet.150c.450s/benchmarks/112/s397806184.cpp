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

using namespace std;

#define EPS (1e-10)
#define EQ(a,b) (abs((a) - (b)) < EPS)
#define EQV(a,b) (EQ((a).real(),(b).real()) && EQ((a).imag(),(b).imag()))

typedef complex<double> P;
typedef long long ll;

const int MAX_SIZE = 10000;

int main(){

	while(1){
		string instr = "";
		int n;
		cin >> n;
		if(n == 0)
			break;
		map<char,char> mcc;
		for(int i = 0; i <= 200; i++){
			mcc[i] = i;
		}
		for(int i = 0; i < n; i++){
			char c,d;
			cin >> c;
			cin >> d;
			mcc[c] = d;
		}
		int m;
		cin >> m;
		for(int i = 0; i < m; i++){
			char c;
			cin >> c;
			instr += c;
		}
		
		string nstr = "";
		for(int i = 0; i < instr.size(); i++){
			nstr += mcc[instr[i]];
		}
		cout << nstr << endl;
	}


	return 0;
}