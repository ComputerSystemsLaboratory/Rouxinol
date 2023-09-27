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

int n;

int main(){
	while(cin>>n){
		if(!n)return 0;
		int ans=0;
		for(int i=2;i<45;i++){
			if(i%2==0&&n%i==i/2&&n/i-i/2+1>0)ans++;
			if(i%2==1&&n%i==0&&n/i-i/2>0)ans++;
		}
		cout<<ans<<endl;
	}
}