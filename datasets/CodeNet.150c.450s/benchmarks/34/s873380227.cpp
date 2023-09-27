#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <complex>
#include <cstdio>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int n,a[31];

int main(){
	a[1]=1;a[2]=2;a[3]=4;
	for(int i=4;i<31;i++)a[i]=a[i-1]+a[i-2]+a[i-3];
	while(cin>>n){
		if(!n)return 0;
		cout<<(a[n]+3649)/3650<<endl;
	}
}