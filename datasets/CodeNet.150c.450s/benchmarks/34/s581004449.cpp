#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
#include <list>
#include <functional>
#include <algorithm>

using namespace std;

unsigned long long ns[35];

int main(int, char**){
    ns[0] = 1;
    ns[1] = 2;
    ns[2] = 4;
    for(int i(3);i<31;++i)
	ns[i]=ns[i-1]+ns[i-2]+ns[i-3];
    int n;
    while(cin >> n){
	if (n ==0) break;
	int tmp = ns[n-1] / (365*10) + (ns[n-1] % 3650 != 0);
	cout << tmp <<endl;
    }
    return 0;
}