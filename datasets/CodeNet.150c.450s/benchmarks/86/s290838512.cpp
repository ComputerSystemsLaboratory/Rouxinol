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

int N,M,P,X[101];

int main(){
	while(cin>>N>>M>>P&&N){
		int sum=0;
		rep(i,N){cin>>X[i+1];sum+=X[i+1];}
		if(!X[M]){cout<<"0"<<endl;continue;}
		cout<<sum*(100-P)/X[M]<<endl;
	}
}