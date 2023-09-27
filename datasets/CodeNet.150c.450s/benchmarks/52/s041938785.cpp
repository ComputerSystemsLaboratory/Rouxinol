#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<climits>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>

using namespace std;

int main(){
	stack<int> st;
	int n,ans;

	while(cin >> n){
		if(n != 0){
			st.push( n );
		}else{
			ans = st.top();
			cout << ans << endl;
			st.pop();
		}
	}
}