#include <iostream>
#include <fstream>
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

int N,A,B,C,X,Y[10000];

int main(){
	while(cin>>N>>A>>B>>C>>X&&N){
		rep(i,N)cin>>Y[i];
		int cur=X,z=0,f=0;
		while(1){
			if(cur==Y[z])z++;
			if(z==N)break;
			f++;
			if(f==10001)break;
			cur=(A*cur+B)%C;
		}
		cout<<(f<10001?f:-1)<<endl;
	}
}