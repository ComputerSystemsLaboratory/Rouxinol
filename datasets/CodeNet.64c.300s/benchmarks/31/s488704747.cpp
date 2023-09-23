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
using namespace std;
int main(){

	int s[31]={0};
	
	int n;
	for(int i=0;i<28;i++){
		cin>>n;
		s[n]++;
	}
	
	for(int i=1;i<=30;i++){
		if(s[i]==0)
			cout<<i<<endl;
	}
	
	
}