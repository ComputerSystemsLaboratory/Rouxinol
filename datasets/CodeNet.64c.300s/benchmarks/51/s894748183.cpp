#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <functional>

#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;

long factorial(int n){
	return n == 0 ? 1 : n * factorial(n-1);
}

int main(){
	int n;
	cin >> n;
	cout<<factorial(n)<<endl;
	return 0;
}