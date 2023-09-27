#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <functional>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long > vll;
typedef vector< vi > vvi;

long long int gcd(long long int m,long long int n){
	if(m==0||n==0){
		return 0;
	}
	while(true){
		if(m>n){
			m %=n;
			if(m==0){
				return n;
			}
		}
		else{
			n %=m;
			if(n==0){
				return m;
			}
		}

	}
}
long long int lcm(long long int m,long long int n){
	if(m==0||n==0){
		return 0;		
	}
	else{
		return ((m/gcd(m,n))*n);
	}
}

int main() {
	long long int a,b,G,L;
	while(true){
		cin>>a>>b;
		if (cin.eof())break;
		G=gcd(a,b);
		L=lcm(a,b);
		cout<<G<<" "<<L<<endl;
	}
}