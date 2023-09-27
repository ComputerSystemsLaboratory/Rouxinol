#define	_USE_MATH_DEFINES
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cfloat>
#include <map>
#include <queue>
#include <stack>
#include <list>
#include <string>
#include <set>
using namespace std;
bool isprime(int x){
	if(x==2)
		return true;
	if(x<2||x%2==0)
		return false;
	
	for(int i=3;i<=sqrt(x);i+=2){
		if(x%i==0)
			return false;
		
	}
	return true;
}
int main(){
	
	int n;
	int x;
	int count=0;
	
	cin>>n;
	
	while(n>0){
		cin>>x;
		
		if(isprime(x))
			count++;
		
		n--;
	}
	
	cout<<count<<endl;
	
}