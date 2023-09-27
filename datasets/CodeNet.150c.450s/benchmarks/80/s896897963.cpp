#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <math.h>
#include <map>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

bool has_key_using_count(map<char, char> &m, char n){
    if (m.count(n) == 0){
        return false;
    }
    else{
        return true;
    }
}

int main()
{
	//ifstream cin("sample.txt");

	int n = 4, sumA = 0, sumB = 0, t = 0, ans = 0;
	
	rep(i, n) {
		cin >> t;
		sumA += t;
	}
	rep(i, n) {
		cin >> t;
		sumB += t;
	}

	ans = (sumA >= sumB ? sumA : sumB);
	//cout << ans << endl;
	std::cout << ans << endl;

	return 0;
}