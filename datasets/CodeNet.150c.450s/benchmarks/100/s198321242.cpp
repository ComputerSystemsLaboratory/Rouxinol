#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main(){
	int n;
	cin >> n;
	long res = 1;
	for(int i = 1; i <= n; i++)res *= i;
	cout << res << endl;
}
