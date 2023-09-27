#include<iostream>
#include<sstream>
#include<fstream>
#include<cstdio>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<cmath>
#include<cstdlib>
using namespace std;

int main(){
	int n;
	while(scanf("%d",&n)==1){
		long long k = 600/n-1;
		long long ex = (n*pow(n,2)*((k*(k+1)*(2*k+1))/6));
		cout<<ex<<endl;
	}
	return 0;
}