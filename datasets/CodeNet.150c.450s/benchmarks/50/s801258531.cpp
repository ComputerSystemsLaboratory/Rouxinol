#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <cstdio>
#include <math.h>
#include <map>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int n;

int main(){
	while(cin>>n){
		if(n==0)return 0;
		n=1000-n;
		cout<<n/500+n%500/100+n%100/50+n%50/10+n%10/5+n%5/1<<endl;
	}
}