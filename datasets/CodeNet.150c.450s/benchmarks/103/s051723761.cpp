#define	_USE_MATH_DEFINES
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <cfloat>
#include <map>
#include <queue>
#include <stack>
#include <list>
using namespace std;

int n,s,x;
void sum(int i,int k,int n){ 
	if(s==k&&n==0){
		x++;
		return ;
	}
	if(i>=10||n==0)
		return;
	sum(i+1,k,n);
	sum(i+1,k+i,n-1);
}
int main(){
	
	while(cin>>n>>s,n!=0||s!=0){
		x=0;
		sum(0,0,n);
		
		cout<<x<<endl;
	}
	
}