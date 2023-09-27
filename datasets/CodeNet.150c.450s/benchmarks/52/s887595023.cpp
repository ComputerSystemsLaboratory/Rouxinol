#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <queue>
#include <map>
#include <stack>
#define INF 100000000
 
using namespace std;
typedef long long ll;

int main(){
	stack<int> st;
	while(1){
		int n;
		if(!(cin>>n))break;
		if(n==0){
			
			cout<<st.top()<<endl;
			st.pop();
		}
		else{
			st.push(n);
		}
	}
	return 0;
}