#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<queue>
#include<map>
#include<set>
#include<complex>
#include<stack>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)


int main(){
	
	stack<int> st;
	int in;
	while(scanf("%d",&in)!=EOF){
		if(in!=0)st.push(in);
		else{
			printf("%d\n",st.top());
			st.pop();
		}
	}
}