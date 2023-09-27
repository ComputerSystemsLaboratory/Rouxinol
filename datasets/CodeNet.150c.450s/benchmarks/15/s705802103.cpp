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

int n,q;
int main(){
	cin >> n;
	int S[n];
	int count = 0;
	int data;
	for(int i = 0;i < n;i++){
		cin >> S[i];
	}
	cin >> q;
	for(int j = 0;j < q;j++){
		int d;
		cin >> d;
		for(int k = 0;k < n;k++){
			if(S[k] == d){
				count++;
				break;
			}
		}
	}
	cout << count << endl;
	return 0;
}