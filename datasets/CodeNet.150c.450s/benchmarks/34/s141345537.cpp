#include <cstdio>
#include <utility>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

long long dp(int a){
	if(a==0) return 1;
	else if(a==1) return 1;
	else if(a==2) return 2;
	else {
	return dp(a-3)+dp(a-2)+dp(a-1);
	}
}

int main() 
{
	int n;
	while(cin >> n , !(n==0))
	{
		long long day = dp(n);
		
		if(day%3650==0)
		cout << day/3650 << endl;
		else 
		cout <<day/3650 +1 << endl;
	}
	return 0 ;
}