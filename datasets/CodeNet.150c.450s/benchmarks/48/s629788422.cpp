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

#define rep(i,n) for(int i=0;i<n;i++)

int e;

int main(){
	while(cin>>e&&e){
		int ans=9999999;
		rep(i,101)rep(j,1001){
			if(e-i*i*i-j*j>=0)ans=min(ans,e-i*i*i-j*j+i+j);
		}
		cout<<ans<<endl;
	}
}