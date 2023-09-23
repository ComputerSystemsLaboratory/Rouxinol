#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;

long long int factr(int n){
	if(n==1) return 1;
	return (long long int)n*factr(n-1);
}

int main(){
	int n;
	cin >> n;
	cout << factr(n) << endl;
	return 0; 
}