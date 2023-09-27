#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;
#define NIL -1

int *T;
int n;
int main(){
	cin >> n;
	T = new int[2*(n+1)];
	for(int i = 1;i <= n;i++){
		cin >> T[i];
	}
	for(int i = 1;i <= n;i++){
		cout << "node " << i << ": key = " << T[i] << ", ";
		if(i/2 >= 1){
			cout << "parent key = " << T[i/2] << ", ";
		}
		if(2*i <= n){
			cout << "left key = " << T[2*i] << ", ";
		}
		if((2*i)+1 <= n){
			cout << "right key = " << T[(2*i)+1] << ", ";
		}
		cout << endl;
	}
	return 0;
}