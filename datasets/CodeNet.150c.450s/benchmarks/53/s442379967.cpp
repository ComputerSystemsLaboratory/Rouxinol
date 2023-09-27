#include <algorithm>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
#include <set>
#include <stack>
#include <map>
#include <cmath>
#include <queue>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
#define MAX_N 2000000

int main()
{
	int n;
	cin>>n;
	int number = n;
	vector<int> factorList;
	for(int i = 2; i*i <= n; i++){
		while( number % i == 0 ){
			factorList.push_back(i);
			number = number / i;
			//cout<<number<<":"<<i<<endl;
		}
	}
	if(number != 1) factorList.push_back(number);
	if( number == n){
		cout<<n<<":"<<" "<<n<<endl;
	}else{
		cout<<n<<":";
		rep(i,factorList.size()){
			cout<<" "<<factorList[i];
		}
		cout<<endl;
	}

	return 0;
}


