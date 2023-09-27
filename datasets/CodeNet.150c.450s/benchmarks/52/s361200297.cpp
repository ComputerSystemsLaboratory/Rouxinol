#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <functional>
#include <sstream>
using namespace std;

#define REP(i,a,n) for(int i=(a);i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()

int main(){
	int n;
	stack<int> st;
	while(~scanf("%d",&n)){
		if( n==0 ){
			printf("%d\n",st.top());
			st.pop();
		}else{
			st.push(n);
		}
	}
	return 0;
}